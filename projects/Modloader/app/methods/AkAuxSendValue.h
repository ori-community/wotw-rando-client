#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AkAuxSendValue.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::AkAuxSendValue {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor, (app::AkAuxSendValue * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026CAFE0, void*, getCPtr, (app::AkAuxSendValue * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkAuxSendValue * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026CB070, void, Finalize, (app::AkAuxSendValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CB0F0, void, Dispose, (app::AkAuxSendValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CB300, void, set_listenerID, (app::AkAuxSendValue * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x026CB430, uint64_t, get_listenerID, (app::AkAuxSendValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CB550, void, set_auxBusID, (app::AkAuxSendValue * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026CB680, uint32_t, get_auxBusID, (app::AkAuxSendValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CB7A0, void, set_fControlValue, (app::AkAuxSendValue * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x026CB8D0, float, get_fControlValue, (app::AkAuxSendValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CB9F0, void, Set, (app::AkAuxSendValue * this_ptr, app::GameObject* listener, uint32_t id, float value))
    IL2CPP_REGISTER_METHOD(0x026CBB00, bool, IsSame, (app::AkAuxSendValue * this_ptr, app::GameObject* listener, uint32_t id))
    IL2CPP_REGISTER_METHOD(0x026CBBF0, int32_t, GetSizeOf, ())
} // namespace app::classes::AkAuxSendValue
