#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_IContext_Boolean_.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LegacyWaitForTrigger.h>
#include <Modloader/app/structs/Rect.h>

namespace app::classes::LegacyWaitForTrigger {
    IL2CPP_REGISTER_METHOD(0x011318A0, app::Rect, get_Bounds, app::LegacyWaitForTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01131A70, app::Func_2_IContext_Boolean_*, get_CodeCondition, app::LegacyWaitForTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01131BD0, bool, Validate, app::LegacyWaitForTrigger* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01131BE0, bool, get_IsInside, app::LegacyWaitForTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C5A70, void, ctor, app::LegacyWaitForTrigger* this_ptr)
} // namespace app::classes::LegacyWaitForTrigger
