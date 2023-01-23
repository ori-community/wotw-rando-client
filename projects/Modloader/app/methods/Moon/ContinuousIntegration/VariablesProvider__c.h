#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VariablesProvider_c.h>
#include <Modloader/app/structs/Match.h>

namespace app::classes::Moon::ContinuousIntegration::VariablesProvider___c {
    IL2CPP_REGISTER_METHOD(0x0318F7A0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::VariablesProvider_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0318F8E0, bool, _ParseArguments_b__5_1, (app::VariablesProvider_c * this_ptr, app::Match* m))
    IL2CPP_REGISTER_METHODINFO(0x04795A08, VariablesProvider_c__ParseArguments_b__5_1__MethodInfo)
} // namespace app::classes::Moon::ContinuousIntegration::VariablesProvider___c
