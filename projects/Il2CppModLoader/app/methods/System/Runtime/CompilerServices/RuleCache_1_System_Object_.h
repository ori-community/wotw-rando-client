#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::CompilerServices::RuleCache_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x027731A0, void, ctor, (app::RuleCache_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object__Array *, GetRules, (app::RuleCache_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02773300, void, MoveRule, (app::RuleCache_1_System_Object_ * this_ptr, app::Object * rule, int32_t i))
    IL2CPP_REGISTER_METHOD(0x02773630, void, AddRule, (app::RuleCache_1_System_Object_ * this_ptr, app::Object * new_rule))
    IL2CPP_REGISTER_METHOD(0x02773740, app::Object__Array *, AddOrInsert, (app::Object__Array * rules, app::Object * item))
}
