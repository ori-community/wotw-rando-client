#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkMIDIPost.h>
#include <Modloader/app/structs/AkMIDIPostArray.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::AkMIDIPostArray {
    IL2CPP_REGISTER_METHOD(0x026F81B0, void, ctor, app::AkMIDIPostArray* this_ptr, int32_t size)
    IL2CPP_REGISTER_METHOD(0x026F82A0, app::AkMIDIPost*, get_Item, app::AkMIDIPostArray* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x026F8440, void, set_Item, app::AkMIDIPostArray* this_ptr, int32_t index, app::AkMIDIPost* value)
    IL2CPP_REGISTER_METHOD(0x026F8550, void, Finalize, app::AkMIDIPostArray* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026F8650, void, PostOnEvent_1, app::AkMIDIPostArray* this_ptr, uint32_t in_event_i_d, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x026F8750, void, PostOnEvent_2, app::AkMIDIPostArray* this_ptr, uint32_t in_event_i_d, app::GameObject* game_object, int32_t count)
    IL2CPP_REGISTER_METHOD(0x002FB930, void*, GetBuffer, app::AkMIDIPostArray* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, Count, app::AkMIDIPostArray* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026F8890, void*, GetObjectPtr, app::AkMIDIPostArray* this_ptr, int32_t index)
} // namespace app::classes::AkMIDIPostArray
