// Copyright (c) 2019 Patrick Gemmell All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: September 12 2019
// This Program calculates the total of two integers

#include <stdio.h>
#include <gb/gb.h>

#include  "export.c"

void main() {
    // this funciton displays a happy face

    set_sprite_data(0, 2, export);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;
}
