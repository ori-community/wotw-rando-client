#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Net::CFString {
    IL2CPP_REGISTER_METHOD(0x02173690, void, ctor, (app::CFString * this_ptr, void* handle, bool own))
    IL2CPP_REGISTER_METHOD(0x0217A1D0, void*, CFStringCreateWithCharacters, (void* alloc, void* chars, void* length))
    IL2CPP_REGISTER_METHOD(0x0217A280, app::CFString*, Create, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x0217A4A0, void*, CFStringGetLength, (void* handle))
    IL2CPP_REGISTER_METHOD(0x0217A540, void*, CFStringGetCharactersPtr, (void* handle))
    IL2CPP_REGISTER_METHOD(0x0217A5E0, void*, CFStringGetCharacters, (void* handle, app::CFRange range, void* buffer))
    IL2CPP_REGISTER_METHOD(0x0217A6A0, app::String*, AsString, (void* handle))
    IL2CPP_REGISTER_METHOD(0x0217A970, app::String*, ToString, (app::CFString * this_ptr))
} // namespace app::classes::Mono::Net::CFString
