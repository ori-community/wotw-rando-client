#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkAuxSendArray {
    IL2CPP_REGISTER_METHOD(0x026CA1A0, void, ctor, (app::AkAuxSendArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CA3D0, app::AkAuxSendValue *, get_Item, (app::AkAuxSendArray * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047714F0, AkAuxSendArray_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026CA560, bool, get_isFull, (app::AkAuxSendArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CA5F0, void, Dispose, (app::AkAuxSendArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CA6B0, void, Finalize, (app::AkAuxSendArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CA740, void, Reset, (app::AkAuxSendArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CA7E0, bool, Add_1, (app::AkAuxSendArray * this_ptr, app::GameObject * in_listener_game_obj, uint32_t in__aux_bus_i_d, float in_f_value))
    IL2CPP_REGISTER_METHOD(0x026CA940, bool, Add_2, (app::AkAuxSendArray * this_ptr, uint32_t in__aux_bus_i_d, float in_f_value))
    IL2CPP_REGISTER_METHOD(0x026CAA60, bool, Contains_1, (app::AkAuxSendArray * this_ptr, app::GameObject * in_listener_game_obj, uint32_t in__aux_bus_i_d))
    IL2CPP_REGISTER_METHOD(0x026CAB90, bool, Contains_2, (app::AkAuxSendArray * this_ptr, uint32_t in__aux_bus_i_d))
    IL2CPP_REGISTER_METHOD(0x026CAC80, app::AKRESULT__Enum, SetValues, (app::AkAuxSendArray * this_ptr, app::GameObject * game_object))
    IL2CPP_REGISTER_METHOD(0x026CAD70, app::AKRESULT__Enum, GetValues, (app::AkAuxSendArray * this_ptr, app::GameObject * game_object))
    IL2CPP_REGISTER_METHOD(0x002FB930, void *, GetBuffer, (app::AkAuxSendArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, Count, (app::AkAuxSendArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CAE90, void *, GetObjectPtr, (app::AkAuxSendArray * this_ptr, int32_t index))
}
