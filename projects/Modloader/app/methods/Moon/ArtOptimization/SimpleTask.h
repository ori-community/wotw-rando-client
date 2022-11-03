#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::ArtOptimization::SimpleTask {
    IL2CPP_REGISTER_METHOD(0x002FB940, void, SetNext, (app::SimpleTask * this_ptr, app::IOptimizationTask* next_task))
    IL2CPP_REGISTER_METHOD(0x00CB2CD0, void, Update, (app::SimpleTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB2CF0, void, EnterNextTaskContext, (app::SimpleTask * this_ptr, app::Object* result))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterContext, (app::SimpleTask * this_ptr, app::IOptimizationTask* antecedent, app::Object* context_data))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::TaskState__Enum, get_State, (app::SimpleTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_State, (app::SimpleTask * this_ptr, app::TaskState__Enum value))
    IL2CPP_REGISTER_METHOD(0x00CB2DA0, bool, get_IsFinished, (app::SimpleTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SimpleTask * this_ptr))
} // namespace app::classes::Moon::ArtOptimization::SimpleTask
