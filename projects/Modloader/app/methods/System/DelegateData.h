#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DelegateData.h>

namespace app::classes::System::DelegateData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DelegateData* this_ptr)
}
