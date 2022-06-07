#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkVertex {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkVertex * this_ptr, void * c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x027019D0, void *, getCPtr, (app::AkVertex * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkVertex * this_ptr, void * c_ptr))
    IL2CPP_REGISTER_METHOD(0x02701A60, void, Finalize, (app::AkVertex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02701AE0, void, Dispose, (app::AkVertex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02701CF0, void, ctor_2, (app::AkVertex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02701E10, void, ctor_3, (app::AkVertex * this_ptr, float in__x, float in__y, float in__z))
    IL2CPP_REGISTER_METHOD(0x02701F70, void, set_X, (app::AkVertex * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x027020A0, float, get_X, (app::AkVertex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027021C0, void, set_Y, (app::AkVertex * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x027022F0, float, get_Y, (app::AkVertex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02702410, void, set_Z, (app::AkVertex * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02702540, float, get_Z, (app::AkVertex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02702660, void, Clear, (app::AkVertex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02702700, int32_t, GetSizeOf, ())
    IL2CPP_REGISTER_METHOD(0x02702790, void, Clone, (app::AkVertex * this_ptr, app::AkVertex * other))
}
