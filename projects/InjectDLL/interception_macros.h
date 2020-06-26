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

#define STATIC_CLASS_EXTERN(type, name) \
extern type const name; \
bool name##_is_valid()

#define STATIC_CLASS(address, type, name) \
type const name = *reinterpret_cast<type*>(resolve_rva(address)); \
bool name##_is_valid() { return !(name->_2.bitflags2 & 2 != 0 && name->_2.cctor_finished == 0); }

#define INLINE_STATIC_CLASS(address, type, name) \
type const name = *reinterpret_cast<type*>(resolve_rva(address)); \
auto name##_is_valid = [&name]() -> bool { return !(name->_2.bitflags2 & 2 != 0 && name->_2.cctor_finished == 0); }
