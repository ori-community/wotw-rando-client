#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RagdollUtility_Child.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::RootMotion::FinalIK::RagdollUtility_Child {
    IL2CPP_REGISTER_METHOD(0x02A1BDB0, void, ctor, app::RagdollUtility_Child* this_ptr, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x02A1BEC0, void, FixTransform, app::RagdollUtility_Child* this_ptr, float weight)
    IL2CPP_REGISTER_METHOD(0x02A1C340, void, StoreLocalState, app::RagdollUtility_Child* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::RagdollUtility_Child
