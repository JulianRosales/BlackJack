//main.c 
#include <gtk/gtk.h>
#include "blackjack_window.h"

// Callback for the play button
static void on_play_button_clicked(GtkWidget *widget, gpointer data) {
    g_print("Play button clicked\n");
    // TODO: Add logic to transition to the game screen
}

int main(int argc, char *argv[]) {
    // Initialize GTK
    gtk_init(&argc, &argv);

    // Create and setup the main window
    GtkWidget *window = create_main_window();

    // Create the play button and connect the callback
    GtkWidget *play_button = gtk_button_new_with_label("Play");
    g_signal_connect(play_button, "clicked", G_CALLBACK(on_play_button_clicked), NULL);

    // Set up the main layout (VBox) and add the play button
    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);
    gtk_box_pack_start(GTK_BOX(vbox), gtk_image_new_from_file("assets/blackjack_table.png"), TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), play_button, FALSE, FALSE, 0);

    // Add the vbox to the main window and show all widgets
    gtk_container_add(GTK_CONTAINER(window), vbox);
    gtk_widget_show_all(window);

    // Start the GTK main loop
    gtk_main();

    return 0;
}
