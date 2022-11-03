#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Net::CFObject {
    IL2CPP_REGISTER_METHOD(0x02177F70, void*, dlopen, (app::String * path, int32_t mode))
    IL2CPP_REGISTER_METHOD(0x021780F0, void*, dlsym, (void* handle, app::String* symbol))
    IL2CPP_REGISTER_METHOD(0x02178270, void, dlclose, (void* handle))
    IL2CPP_REGISTER_METHOD(0x02178310, void*, GetIndirect, (void* handle, app::String* symbol))
    IL2CPP_REGISTER_METHOD(0x02178320, void*, GetCFObjectHandle, (void* handle, app::String* symbol))
    IL2CPP_REGISTER_METHOD(0x021784A0, void, ctor, (app::CFObject * this_ptr, void* handle, bool own))
    IL2CPP_REGISTER_METHOD(0x02178550, void, Finalize, (app::CFObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, void*, get_Handle, (app::CFObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Handle, (app::CFObject * this_ptr, void* value))
    IL2CPP_REGISTER_METHOD(0x021785D0, void*, CFRetain, (void* handle))
    IL2CPP_REGISTER_METHOD(0x02178670, void, Retain, (app::CFObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02178710, void, CFRelease, (void* handle))
    IL2CPP_REGISTER_METHOD(0x021787B0, void, Release, (app::CFObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02178850, void, Dispose_1, (app::CFObject * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x02178960, void, Dispose_2, (app::CFObject * this_ptr))
} // namespace app::classes::Mono::Net::CFObject
