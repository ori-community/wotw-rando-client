#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MissingManifestResourceException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Resources::MissingManifestResourceException {
    IL2CPP_REGISTER_METHOD(0x01A83FA0, void, ctor_1, (app::MissingManifestResourceException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A84030, void, ctor_2, (app::MissingManifestResourceException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::MissingManifestResourceException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Resources::MissingManifestResourceException
