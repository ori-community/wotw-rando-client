#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkVector.h>

namespace app::classes::AkVector {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkVector * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x02700D80, void*, getCPtr, (app::AkVector * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkVector * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x02700E10, void, Finalize, (app::AkVector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02700E90, void, Dispose, (app::AkVector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027010A0, void, Zero, (app::AkVector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027011C0, void, set_X, (app::AkVector * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x027012F0, float, get_X, (app::AkVector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02701410, void, set_Y, (app::AkVector * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02701540, float, get_Y, (app::AkVector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02701660, void, set_Z, (app::AkVector * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02701790, float, get_Z, (app::AkVector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027018B0, void, ctor_2, (app::AkVector * this_ptr))
} // namespace app::classes::AkVector
