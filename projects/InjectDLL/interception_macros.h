#pragma once

#include "interception.h"

#define INTERCEPT(address, returnType, name, params) \
returnType (*name) params; \
returnType name##Intercept params; \
intercept binding_##name (address, &(PVOID&) name, name##Intercept, #name); \
returnType name##Intercept params

#define BINDING(address, returnType, name, params) \
returnType (*name) params; \
intercept binding_##name (address, &(PVOID&) name, nullptr, #name);
