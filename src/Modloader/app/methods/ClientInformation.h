#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IBuildInformationProvider.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ClientInformation {
    IL2CPP_REGISTER_METHOD(0x02E8E470, void, SetProvider, app::IBuildInformationProvider* provider)
    IL2CPP_REGISTER_METHOD(0x02E8E520, app::String*, get_Revision, )
    IL2CPP_REGISTER_METHOD(0x02E8E5E0, void, cctor, )
} // namespace app::classes::ClientInformation
