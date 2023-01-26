#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/_ArrayPoolDefault.h>

namespace app::classes::_ArrayPoolDefault {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::_ArrayPoolDefault * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x0271B520, void*, getCPtr, (app::_ArrayPoolDefault * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::_ArrayPoolDefault * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x0271B5B0, void, Finalize, (app::_ArrayPoolDefault * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271B630, void, Dispose, (app::_ArrayPoolDefault * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271B840, int32_t, Get, ())
    IL2CPP_REGISTER_METHOD(0x0271B950, void, ctor_2, (app::_ArrayPoolDefault * this_ptr))
} // namespace app::classes::_ArrayPoolDefault
