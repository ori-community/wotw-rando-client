#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MissingSatelliteAssemblyException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Resources::MissingSatelliteAssemblyException {
    IL2CPP_REGISTER_METHOD(0x01A84050, void, ctor_1, app::MissingSatelliteAssemblyException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A840E0, void, ctor_2, app::MissingSatelliteAssemblyException* this_ptr, app::String* message, app::String* culture_name)
    IL2CPP_REGISTER_METHOD(
        0x01A0FAA0,
        void,
        ctor_3,
        app::MissingSatelliteAssemblyException* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
} // namespace app::classes::System::Resources::MissingSatelliteAssemblyException
