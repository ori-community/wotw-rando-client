#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HierarchyDebugMenu_WaitForStepEnd_d_64.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::HierarchyDebugMenu__WaitForStepEnd_d__64 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::HierarchyDebugMenu_WaitForStepEnd_d_64 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::HierarchyDebugMenu_WaitForStepEnd_d_64 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B52460, bool, MoveNext, (app::HierarchyDebugMenu_WaitForStepEnd_d_64 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::HierarchyDebugMenu_WaitForStepEnd_d_64 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B52610, void, IEnumerator_Reset, (app::HierarchyDebugMenu_WaitForStepEnd_d_64 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470DFB0, HierarchyDebugMenu_WaitForStepEnd_d_64_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::HierarchyDebugMenu_WaitForStepEnd_d_64 * this_ptr))
} // namespace app::classes::HierarchyDebugMenu__WaitForStepEnd_d__64
