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
extern type* name; \
bool name##_is_valid()

#define STATIC_CLASS(address, type, name) \
type* name = nullptr; \
intercept binding_class_##name (address, &reinterpret_cast<void*>(name), nullptr, #name); \
bool name##_is_valid() { return name != nullptr && (*name) != nullptr && !(reinterpret_cast<Il2CppClass*>(*name)->has_cctor != 0 && reinterpret_cast<Il2CppClass*>(*name)->cctor_finished == 0); }

#define INLINE_STATIC_CLASS(address, type, name) \
type const name = *reinterpret_cast<type*>(resolve_rva(address)); \
auto name##_is_valid = [&name]() -> bool { return name != nullptr && !(reinterpret_cast<Il2CppClass*>(name)->has_cctor != 0 && reinterpret_cast<Il2CppClass*>(name)->cctor_finished == 0); }
