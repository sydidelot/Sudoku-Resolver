/*
 * =====================================================================================
 *
 *       Filename:  sdk_sidebar.h
 *
 *    Description:  Side bar of the Sudoku Resolver application.
 *
 *        Version:  1.0
 *        Created:  08/31/2010 11:40:24 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sylvain Didelot (), didelot.sylvain@gmail.com
 *        Company:
 *
 * =====================================================================================
 */

#ifndef __SDK_SIDEBAR_H
#define __SDK_SIDEBAR_H
#ifdef GTK_ENABLE

struct sdk_event_list_s
{
  int i;
  int j;
  int value;

  struct sdk_event_list_s* next;
  struct sdk_event_list_s* prev;
};

GtkWidget* sdk_gui_init_sidebar();

void sdk_gui_sidebar_add_event(int i, int j, int value);
void sdk_gui_sidebar_refresh_list();

#endif
#endif
