#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/List_1_CharacterPlatformMovement_.h>

namespace app::classes::System::Collections::Generic::List_1_CharacterPlatformMovement_ {
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_CharacterPlatformMovement_* this_ptr, app::CharacterPlatformMovement* item)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_CharacterPlatformMovement_* this_ptr, app::CharacterPlatformMovement* item)
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, app::List_1_CharacterPlatformMovement_* this_ptr, int32_t index, app::CharacterPlatformMovement* item)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_CharacterPlatformMovement_* this_ptr, app::CharacterPlatformMovement* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_CharacterPlatformMovement_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::CharacterPlatformMovement*, get_Item, app::List_1_CharacterPlatformMovement_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_CharacterPlatformMovement_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, app::List_1_CharacterPlatformMovement_* this_ptr, int32_t capacity)
} // namespace app::classes::System::Collections::Generic::List_1_CharacterPlatformMovement_
