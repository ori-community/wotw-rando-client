#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Version_VersionResult__Boxed.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Version_ParseFailureKind__Enum.h>

namespace app::classes::System::Version_VersionResult {
    IL2CPP_REGISTER_METHOD(0x00249F60, void, Init, (app::Version_VersionResult__Boxed * this_ptr, app::String* argument_name, bool can_throw))
    IL2CPP_REGISTER_METHOD(0x00249F70, void, SetFailure_1, (app::Version_VersionResult__Boxed * this_ptr, app::Version_ParseFailureKind__Enum failure))
    IL2CPP_REGISTER_METHOD(0x00249F80, void, SetFailure_2, (app::Version_VersionResult__Boxed * this_ptr, app::Version_ParseFailureKind__Enum failure, app::String* argument))
    IL2CPP_REGISTER_METHOD(0x00249F90, app::Exception*, GetVersionParseException, (app::Version_VersionResult__Boxed * this_ptr))
} // namespace app::classes::System::Version_VersionResult
