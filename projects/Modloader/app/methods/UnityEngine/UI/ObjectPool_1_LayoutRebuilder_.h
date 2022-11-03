#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::UI::ObjectPool_1_LayoutRebuilder_ {
    IL2CPP_REGISTER_METHOD(0x02ACEDE0, void, ctor, (app::ObjectPool_1_LayoutRebuilder_ * this_ptr, app::UnityAction_1_UnityEngine_UI_LayoutRebuilder_* action_on_get, app::UnityAction_1_UnityEngine_UI_LayoutRebuilder_* action_on_release))
    IL2CPP_REGISTER_METHODINFO(0x0477BB88, ObjectPool_1_LayoutRebuilder___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ACEFA0, app::LayoutRebuilder*, Get, (app::ObjectPool_1_LayoutRebuilder_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764738, ObjectPool_1_LayoutRebuilder__Get__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ACF090, void, Release, (app::ObjectPool_1_LayoutRebuilder_ * this_ptr, app::LayoutRebuilder* element))
    IL2CPP_REGISTER_METHODINFO(0x047732C8, ObjectPool_1_LayoutRebuilder__Release__MethodInfo)
} // namespace app::classes::UnityEngine::UI::ObjectPool_1_LayoutRebuilder_
