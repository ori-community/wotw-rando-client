#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_IContext_Boolean_.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LegacyWaitForInput.h>

namespace app::classes::LegacyWaitForInput {
    IL2CPP_REGISTER_METHOD(0x01131720, app::Func_2_IContext_Boolean_*, get_CodeCondition, app::LegacyWaitForInput* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01131880, bool, Validate, app::LegacyWaitForInput* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x008C5A70, void, ctor, app::LegacyWaitForInput* this_ptr)
} // namespace app::classes::LegacyWaitForInput
