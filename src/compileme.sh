#!/bin/bash

gcc -g -O0 -shared -fPIC -o glusterFS.so glusterFS.c glusterFS_access.c glusterFS_checkfns.c glusterFS_checkfns_local.c
