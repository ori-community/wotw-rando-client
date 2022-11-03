#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::InteractionSystem_InteractionDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::InteractionSystem_InteractionDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::InteractionSystem_InteractionDelegate * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::InteractionObject* interaction_object))
    IL2CPP_REGISTER_METHOD(0x02A14570, app::IAsyncResult*, BeginInvoke, (app::InteractionSystem_InteractionDelegate * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::InteractionObject* interaction_object, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::InteractionSystem_InteractionDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::RootMotion::FinalIK::InteractionSystem_InteractionDelegate
