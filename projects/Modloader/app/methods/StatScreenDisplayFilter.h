#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StatScreenDisplayFilter.h>

namespace app::classes::StatScreenDisplayFilter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StatScreenDisplayFilter * this_ptr))
}
