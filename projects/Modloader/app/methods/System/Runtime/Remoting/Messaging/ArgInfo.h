#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ArgInfo.h>
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/ArgInfoType__Enum.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Runtime::Remoting::Messaging::ArgInfo {
    IL2CPP_REGISTER_METHOD(0x02309730, void, ctor, (app::ArgInfo * this_ptr, app::MethodBase* method_1, app::ArgInfoType__Enum type))
    IL2CPP_REGISTER_METHOD(0x023099D0, app::Object__Array*, GetInOutArgs, (app::ArgInfo * this_ptr, app::Object__Array* args))
} // namespace app::classes::System::Runtime::Remoting::Messaging::ArgInfo
