#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationTester_Group.h>
#include <Modloader/app/structs/AnimationTester_IToogleGroup__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::AnimationTester_Group {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_ToogleName, app::AnimationTester_Group* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01AFDC50, bool, get_IsEnabled, app::AnimationTester_Group* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01AFDDB0, void, ctor_1, app::AnimationTester_Group* this_ptr, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x01AFDFF0, void, ctor_2, app::AnimationTester_Group* this_ptr, app::Transform* transform, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01AFE220, void, Toogle, app::AnimationTester_Group* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01AFE3F0, app::AnimationTester_IToogleGroup__Array*, GetChildren, app::AnimationTester_Group* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01AFE670, void, PlayNext, app::AnimationTester_Group* this_ptr, int32_t amount_of_layers)
    IL2CPP_REGISTER_METHOD(0x01AFE840, void, Interrupt, app::AnimationTester_Group* this_ptr)
} // namespace app::classes::AnimationTester_Group
