#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_T_Enumerator_SystemIntegration_IUpdateable_.h>
#include <Modloader/app/structs/List_1_SystemIntegration_IUpdateable_.h>
#include <Modloader/app/structs/IUpdateable.h>

namespace app::classes::System::Collections::Generic::List_1_SystemIntegration_IUpdateable_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_SystemIntegration_IUpdateable_, GetEnumerator, (app::List_1_SystemIntegration_IUpdateable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04740918, List_1_SystemIntegration_IUpdateable__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_SystemIntegration_IUpdateable_ * this_ptr, app::IUpdateable* item))
    IL2CPP_REGISTER_METHODINFO(0x04755A88, List_1_SystemIntegration_IUpdateable__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_SystemIntegration_IUpdateable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047439E0, List_1_SystemIntegration_IUpdateable___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_SystemIntegration_IUpdateable_
