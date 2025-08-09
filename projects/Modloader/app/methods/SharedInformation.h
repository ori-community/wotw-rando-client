#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SharedInformation.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SharedInformation {
    IL2CPP_REGISTER_METHOD(0x005B0F00, app::String*, get_UserSourceAnimationsPath, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SharedInformation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B0FD0, void, cctor, )
} // namespace app::classes::SharedInformation
