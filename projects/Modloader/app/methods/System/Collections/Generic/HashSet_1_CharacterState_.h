#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterState.h>
#include <Modloader/app/structs/HashSet_1_CharacterState_.h>

namespace app::classes::System::Collections::Generic::HashSet_1_CharacterState_ {
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, app::HashSet_1_CharacterState_* this_ptr, app::CharacterState* item)
    IL2CPP_REGISTER_METHOD(0x02ABEC50, bool, Remove, app::HashSet_1_CharacterState_* this_ptr, app::CharacterState* item)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, app::HashSet_1_CharacterState_* this_ptr)
} // namespace app::classes::System::Collections::Generic::HashSet_1_CharacterState_
