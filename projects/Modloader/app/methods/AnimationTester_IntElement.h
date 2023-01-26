#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Action_1_Int32_.h>
#include <Modloader/app/structs/AnimationTester_IntElement.h>
#include <Modloader/app/structs/Func_1_Int32_.h>

namespace app::classes::AnimationTester_IntElement {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Name, (app::AnimationTester_IntElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Action_1_Int32_*, get_Setter, (app::AnimationTester_IntElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Func_1_Int32_*, get_Getter, (app::AnimationTester_IntElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AFE9D0, void, ctor, (app::AnimationTester_IntElement * this_ptr, app::String* name, app::Action_1_Int32_* setter, app::Func_1_Int32_* getter, int32_t min, int32_t max))
    IL2CPP_REGISTER_METHOD(0x01AFE9F0, void, Draw, (app::AnimationTester_IntElement * this_ptr))
} // namespace app::classes::AnimationTester_IntElement
