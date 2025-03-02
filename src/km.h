/**
 * @file km.h
 * @brief Main header for Kalyana Mittata AI assistant
 * 
 * Kalyana Mittata (meaning "good friendship" in Pali) is an AI assistant
 * developed for a PhD dissertation at Mahachulalongkorn University.
 * This project extends pre-existing AI chatbot functionality with an EFL interface.
 * 
 * @copyright Copyright (C) 2025, Mahachulalongkorn University
 * @license GNU Affero General Public License v3.0 (AGPLv3)
 */

#ifndef KM_H
#define KM_H

#include <Elementary.h>

/**
 * @brief Application version information
 */
#define KM_VERSION "0.1.0"
#define KM_TITLE "Kalyana Mittata"
#define KM_DESCRIPTION "AI Assistant for Mahachulalongkorn University"

/**
 * @brief Initialize the Kalyana Mittata application
 * 
 * @param argc Command line argument count
 * @param argv Command line arguments
 * @return int Status code
 */
int km_initialize(int argc, char **argv);

/**
 * @brief Create the main application window
 * 
 * @return Evas_Object* The window object
 */
Evas_Object *km_create_window(void);

/**
 * @brief Initialize the AI backend
 * 
 * @return int Status code (0 on success)
 */
int km_init_ai_backend(void);

/**
 * @brief Process a user message through the AI backend
 * 
 * @param message The user's input message
 * @return char* The AI response (must be freed by caller)
 */
char *km_process_message(const char *message);

#endif /* KM_H */

