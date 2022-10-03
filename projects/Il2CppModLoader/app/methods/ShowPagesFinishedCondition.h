#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ShowPagesFinishedCondition {
    IL2CPP_REGISTER_METHOD(0x005C5E70, bool, Validate, (app::ShowPagesFinishedCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0470BE10, ShowPagesFinishedCondition_Validate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ShowPagesFinishedCondition * this_ptr))
} // namespace app::classes::ShowPagesFinishedCondition
