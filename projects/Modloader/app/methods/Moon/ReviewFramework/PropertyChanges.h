#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PropertyChanges.h>

namespace app::classes::Moon::ReviewFramework::PropertyChanges {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PropertyChanges * this_ptr))
}
