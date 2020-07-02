#pragma once

#include <constants.h>
#include <string>

// Network and CSV
void trace(MessageType type, int level, std::string const& group, std::string const& message);

// Network only
void send_trace(MessageType type, int level, std::string const& group, std::string const& message);

std::string convert_csstring(System_String_o* str);
