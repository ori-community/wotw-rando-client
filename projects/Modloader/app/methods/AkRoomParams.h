#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AkRoomParams {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkRoomParams * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x01894F20, void*, getCPtr, (app::AkRoomParams * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkRoomParams * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x01894FB0, void, Finalize, (app::AkRoomParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01895030, void, Dispose, (app::AkRoomParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01895240, void, ctor_2, (app::AkRoomParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01895360, void, set_Up, (app::AkRoomParams * this_ptr, app::AkVector* value))
    IL2CPP_REGISTER_METHOD(0x018954A0, app::AkVector*, get_Up, (app::AkRoomParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018956B0, void, set_Front, (app::AkRoomParams * this_ptr, app::AkVector* value))
    IL2CPP_REGISTER_METHOD(0x018957F0, app::AkVector*, get_Front, (app::AkRoomParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01895A00, void, set_ReverbAuxBus, (app::AkRoomParams * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x01895B30, uint32_t, get_ReverbAuxBus, (app::AkRoomParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01895C50, void, set_ReverbLevel, (app::AkRoomParams * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01895D80, float, get_ReverbLevel, (app::AkRoomParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01895EA0, void, set_WallOcclusion, (app::AkRoomParams * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01895FD0, float, get_WallOcclusion, (app::AkRoomParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018960F0, void, set_RoomGameObj_AuxSendLevelToSelf, (app::AkRoomParams * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01896220, float, get_RoomGameObj_AuxSendLevelToSelf, (app::AkRoomParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01896340, void, set_RoomGameObj_KeepRegistered, (app::AkRoomParams * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01896470, bool, get_RoomGameObj_KeepRegistered, (app::AkRoomParams * this_ptr))
} // namespace app::classes::AkRoomParams
