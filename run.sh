#!/bin/bash

helpFunction()
{
    echo ""
    echo "Usage: $(basename $0) [ -b ] [ -r SORTING_ALGORITHM ] [ -g ] [ -f filename]"   
    echo -e "\t-b\t build sorting file"
    echo -e "\t-g\t generate random number"
    echo -e "\t-r\t run sorting algorithm"
    echo -e "\t[SORTING_ALGORITHM]"
    echo -e "\t bubble\t\t sort using bublesort"
    echo -e "\t selection\t sort using selection"
    echo -e "\t insertion\t sort using insertion"
    echo -e "\t merge\t\t sort using merge"
    echo -e "\t quick\t\t sort using quick"
    echo -e "\t shell\t\t sort using shell"
    echo -e "\t heap\t\t sort using heap"
    exit 1
}

run()
{
    echo $1 $2
}

no_args="true"
while getopts 'bgr:f:' OPTION; do
    case "$OPTION" in 
        b) 
            make build
            exit 1
        ;;
        
        g)
            build/generateRandomNumber
            mv *.txt input/
            exit 1
        ;;

        r)
            run="$OPTARG"
        ;;

        f)
            file="$OPTARG"
        ;;

        *) 
        helpFunction
        exit 1
        ;;
    esac
    no_args="false"
done

[[ "$no_args" == "true" ]] && { helpFunction; exit 1; }

build/main $run $file