/*
 * include/game.h
 * Declare the interface for the handling game, help, settings and other
 * options in the menu
 *
 * Copyright (C) 2017 Utkarsh Mahshwari <utkarshme96@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GAME_H_VAPGITSI
#define GAME_H_VAPGITSI

/**
 * Create, play and destroy the game
 */
void game_play();


/**
 * Show the help message for the game
 */
void game_help();


/**
 * Show the exit message for the game
 */
void game_exit();

#endif /* end of include guard: GAME_H_VAPGITSI */
