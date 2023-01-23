#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ClientInformationProvider.h>

namespace app::classes::ClientInformationProvider {
    IL2CPP_REGISTER_METHOD(0x02E8E720, app::String*, GetRevision, (app::ClientInformationProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ClientInformationProvider * this_ptr))
} // namespace app::classes::ClientInformationProvider
