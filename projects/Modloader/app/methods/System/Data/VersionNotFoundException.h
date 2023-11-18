#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VersionNotFoundException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::VersionNotFoundException {
    IL2CPP_REGISTER_METHOD(0x022C1950, void, ctor_1, (app::VersionNotFoundException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x022C19A0, void, ctor_2, (app::VersionNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C1A30, void, ctor_3, (app::VersionNotFoundException * this_ptr, app::String* s))
} // namespace app::classes::System::Data::VersionNotFoundException
