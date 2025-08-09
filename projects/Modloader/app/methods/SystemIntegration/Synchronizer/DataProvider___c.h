#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataProvider_c.h>
#include <Modloader/app/structs/Task.h>

namespace app::classes::SystemIntegration::Synchronizer::DataProvider___c {
    IL2CPP_REGISTER_METHOD(0x005348B0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DataProvider_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005349F0, void, _BuildFor_b__17_1, app::DataProvider_c* this_ptr, app::Task* t)
} // namespace app::classes::SystemIntegration::Synchronizer::DataProvider___c
