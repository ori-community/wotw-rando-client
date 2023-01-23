#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AkShowOnlyAttribute.h>

namespace app::classes::AkShowOnlyAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AkShowOnlyAttribute * this_ptr))
}
