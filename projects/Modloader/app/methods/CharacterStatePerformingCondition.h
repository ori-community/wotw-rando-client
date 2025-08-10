#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterStatePerformingCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::CharacterStatePerformingCondition {
    IL2CPP_REGISTER_METHOD(0x01315B10, bool, Validate, app::CharacterStatePerformingCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x008223A0, void, ctor, app::CharacterStatePerformingCondition* this_ptr)
} // namespace app::classes::CharacterStatePerformingCondition
