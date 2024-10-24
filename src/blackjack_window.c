#include "blackjack_window.h"

GtkWidget* create_main_window() {
    // Create a new window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    
    // Set the window properties
    gtk_window_set_title(GTK_WINDOW(window), "Blackjack - Main Menu");
    gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    
    // Connect the signal to handle window close event
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    
    return window;
}
