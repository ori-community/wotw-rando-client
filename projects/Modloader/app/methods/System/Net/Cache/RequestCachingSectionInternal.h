#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RequestCachingSectionInternal.h>

namespace app::classes::System::Net::Cache::RequestCachingSectionInternal {
    IL2CPP_REGISTER_METHOD(0x00B80D80, void, ctor, app::RequestCachingSectionInternal* this_ptr)
}
