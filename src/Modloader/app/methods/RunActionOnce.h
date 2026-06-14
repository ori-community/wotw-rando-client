#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/RunActionOnce.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::RunActionOnce {
    IL2CPP_REGISTER_METHOD(0x01372F40, void, Perform, app::RunActionOnce* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01372F80, void, Serialize, app::RunActionOnce* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x01372FB0, app::String*, GetNiceName, app::RunActionOnce* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::RunActionOnce* this_ptr)
} // namespace app::classes::RunActionOnce
