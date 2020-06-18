#pragma once

#include <constants.h>
#include <string>

void send_trace(MessageType type, int level, std::string const& group, std::string const& message);
void log(std::string);
void debug(std::string);
void error(std::string);
