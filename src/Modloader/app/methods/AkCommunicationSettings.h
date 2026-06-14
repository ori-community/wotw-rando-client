#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkCommunicationSettings.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AkCommunicationSettings {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, app::AkCommunicationSettings* this_ptr, void* c_ptr, bool c_memory_own)
    IL2CPP_REGISTER_METHOD(0x026DC0F0, void*, getCPtr, app::AkCommunicationSettings* obj)
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, app::AkCommunicationSettings* this_ptr, void* c_ptr)
    IL2CPP_REGISTER_METHOD(0x026DC180, void, Finalize, app::AkCommunicationSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DC200, void, Dispose, app::AkCommunicationSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DC410, void, ctor_2, app::AkCommunicationSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DC530, void, set_uPoolSize, app::AkCommunicationSettings* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026DC660, uint32_t, get_uPoolSize, app::AkCommunicationSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DC780, void, set_uDiscoveryBroadcastPort, app::AkCommunicationSettings* this_ptr, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x026DC8B0, uint16_t, get_uDiscoveryBroadcastPort, app::AkCommunicationSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DC9D0, void, set_uCommandPort, app::AkCommunicationSettings* this_ptr, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x026DCB00, uint16_t, get_uCommandPort, app::AkCommunicationSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DCC20, void, set_uNotificationPort, app::AkCommunicationSettings* this_ptr, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x026DCD50, uint16_t, get_uNotificationPort, app::AkCommunicationSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DCE70, void, set_bInitSystemLib, app::AkCommunicationSettings* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x026DCFA0, bool, get_bInitSystemLib, app::AkCommunicationSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DD0D0, void, set_szAppNetworkName, app::AkCommunicationSettings* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x026DD2D0, app::String*, get_szAppNetworkName, app::AkCommunicationSettings* this_ptr)
} // namespace app::classes::AkCommunicationSettings
