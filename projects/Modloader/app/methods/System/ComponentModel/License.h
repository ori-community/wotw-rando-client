#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/License.h>

namespace app::classes::System::ComponentModel::License {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::License * this_ptr))
}
