#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/_ArrayPoolLEngineDefault.h>

namespace app::classes::_ArrayPoolLEngineDefault {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::_ArrayPoolLEngineDefault * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x0271BA70, void*, getCPtr, (app::_ArrayPoolLEngineDefault * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::_ArrayPoolLEngineDefault * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x0271BB00, void, Finalize, (app::_ArrayPoolLEngineDefault * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271BB80, void, Dispose, (app::_ArrayPoolLEngineDefault * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271BD90, int32_t, Get, ())
    IL2CPP_REGISTER_METHOD(0x0271BEA0, void, ctor_2, (app::_ArrayPoolLEngineDefault * this_ptr))
} // namespace app::classes::_ArrayPoolLEngineDefault
