#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RuleCache_1_System_Object_.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Runtime::CompilerServices::RuleCache_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x027731A0, void, ctor, (app::RuleCache_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object__Array*, GetRules, (app::RuleCache_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02773300, void, MoveRule, (app::RuleCache_1_System_Object_ * this_ptr, app::Object* rule, int32_t i))
    IL2CPP_REGISTER_METHOD(0x02773630, void, AddRule, (app::RuleCache_1_System_Object_ * this_ptr, app::Object* new_rule))
    IL2CPP_REGISTER_METHOD(0x02773740, app::Object__Array*, AddOrInsert, (app::Object__Array * rules, app::Object* item))
} // namespace app::classes::System::Runtime::CompilerServices::RuleCache_1_System_Object_
