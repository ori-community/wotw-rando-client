#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Event.h>
#include <Modloader/app/structs/EventModifiers__Enum.h>
#include <Modloader/app/structs/EventType__Enum.h>
#include <Modloader/app/structs/KeyCode__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::Event {
    IL2CPP_REGISTER_METHOD(0x029D52C0, void, ctor_1, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D5320, void, ctor_2, (app::Event * this_ptr, int32_t display_index))
    IL2CPP_REGISTER_METHOD(0x029D5380, void, ctor_3, (app::Event * this_ptr, app::Event* other))
    IL2CPP_REGISTER_METHOD(0x029D5480, app::EventType__Enum, get_rawType, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D54D0, app::Vector2, get_mousePosition, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D5540, app::Vector2, get_delta, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D55B0, int32_t, get_button, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D5600, app::EventModifiers__Enum, get_modifiers, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D5650, void, set_modifiers, (app::Event * this_ptr, app::EventModifiers__Enum value))
    IL2CPP_REGISTER_METHOD(0x029D56B0, int32_t, get_clickCount, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D5700, char16_t, get_character, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D5750, void, set_character, (app::Event * this_ptr, char16_t value))
    IL2CPP_REGISTER_METHOD(0x029D57B0, app::KeyCode__Enum, get_keyCode, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D5800, void, set_keyCode, (app::Event * this_ptr, app::KeyCode__Enum value))
    IL2CPP_REGISTER_METHOD(0x029D5860, void, set_displayIndex, (app::Event * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x029D58C0, app::EventType__Enum, get_type, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D5910, void, set_type, (app::Event * this_ptr, app::EventType__Enum value))
    IL2CPP_REGISTER_METHOD(0x029D5970, app::String*, get_commandName, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D59C0, void, Internal_Use, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D5A10, void*, Internal_Create, (int32_t display_index))
    IL2CPP_REGISTER_METHOD(0x029D5A60, void, Internal_Destroy, (void* ptr))
    IL2CPP_REGISTER_METHOD(0x029D5AB0, void*, Internal_Copy, (void* other_ptr))
    IL2CPP_REGISTER_METHOD(0x029D5B00, app::EventType__Enum, GetTypeForControl, (app::Event * this_ptr, int32_t control_i_d))
    IL2CPP_REGISTER_METHOD(0x029D5B60, bool, PopEvent, (app::Event * out_event))
    IL2CPP_REGISTER_METHOD(0x029D5BB0, void, Internal_SetNativeEvent, (void* ptr))
    IL2CPP_REGISTER_METHOD(0x029D5C00, void, Internal_MakeMasterEventCurrent, (int32_t display_index))
    IL2CPP_REGISTER_METHOD(0x029D5E90, void, Finalize, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D5FB0, bool, get_shift, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D6010, bool, get_control, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D6070, bool, get_alt, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D60D0, app::Event*, get_current, ())
    IL2CPP_REGISTER_METHOD(0x029D6150, bool, get_isKey, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D61C0, bool, get_isMouse, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D6240, app::Event*, KeyboardEvent, (app::String * key))
    IL2CPP_REGISTER_METHOD(0x029D78F0, int32_t, GetHashCode, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D7A10, bool, Equals, (app::Event * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x029D7BE0, app::String*, ToString, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D86D0, void, Use, (app::Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D8940, void, get_mousePosition_Injected, (app::Event * this_ptr, app::Vector2* ret))
    IL2CPP_REGISTER_METHOD(0x029D89A0, void, get_delta_Injected, (app::Event * this_ptr, app::Vector2* ret))
} // namespace app::classes::UnityEngine::Event
