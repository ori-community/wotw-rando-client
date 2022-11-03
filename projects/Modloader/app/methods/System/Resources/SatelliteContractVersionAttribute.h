#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Resources::SatelliteContractVersionAttribute {
    IL2CPP_REGISTER_METHOD(0x01A8FCA0, void, ctor, (app::SatelliteContractVersionAttribute * this_ptr, app::String* version))
    IL2CPP_REGISTER_METHODINFO(0x0471E838, SatelliteContractVersionAttribute__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Version, (app::SatelliteContractVersionAttribute * this_ptr))
} // namespace app::classes::System::Resources::SatelliteContractVersionAttribute
