#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FullSerializer::fsContext {
    IL2CPP_REGISTER_METHOD(0x015096E0, void, Reset, (app::fsContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01509770, void, ctor, (app::fsContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015481B0, void, Set, (app::fsContext * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x018F2C20, bool, Has, (app::fsContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E8490, app::Object *, Get, (app::fsContext * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047339C8, fsContext_Get__MethodInfo)
}
