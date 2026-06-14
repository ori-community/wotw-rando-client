#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterAnimationSystem_CharacterAnimationState.h>
#include <Modloader/app/structs/List_1_CharacterAnimationSystem_CharacterAnimationState_.h>

namespace app::classes::System::Collections::Generic::List_1_CharacterAnimationSystem_CharacterAnimationState_ {
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::CharacterAnimationSystem_CharacterAnimationState*,
        get_Item,
        app::List_1_CharacterAnimationSystem_CharacterAnimationState_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_CharacterAnimationSystem_CharacterAnimationState_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_CharacterAnimationSystem_CharacterAnimationState_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1EA40,
        void,
        Insert,
        app::List_1_CharacterAnimationSystem_CharacterAnimationState_* this_ptr,
        int32_t index,
        app::CharacterAnimationSystem_CharacterAnimationState* item
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_CharacterAnimationSystem_CharacterAnimationState_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_CharacterAnimationSystem_CharacterAnimationState_
