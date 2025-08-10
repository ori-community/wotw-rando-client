#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/STAThreadAttribute.h>

namespace app::classes::System::STAThreadAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::STAThreadAttribute* this_ptr)
}
