#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_FullSerializer_Internal_fsVersionedType_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/fsOption_1_fsVersionedType_.h>
#include <Modloader/app/structs/fsResult.h>
#include <Modloader/app/structs/fsVersionedType.h>

namespace app::classes::FullSerializer::Internal::fsVersionManager {
    IL2CPP_REGISTER_METHOD(
        0x01502EE0,
        app::fsResult,
        GetVersionImportPath,
        app::String* current_version,
        app::fsVersionedType target_version,
        app::List_1_FullSerializer_Internal_fsVersionedType_** path
    )
    IL2CPP_REGISTER_METHOD(
        0x015033E0,
        bool,
        GetVersionImportPathRecursive,
        app::List_1_FullSerializer_Internal_fsVersionedType_* path,
        app::String* current_version,
        app::fsVersionedType current
    )
    IL2CPP_REGISTER_METHOD(0x015035B0, app::fsOption_1_fsVersionedType_, GetVersionedType, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01503A70, void, VerifyConstructors, app::fsVersionedType type)
    IL2CPP_REGISTER_METHOD(0x01503CF0, void, VerifyUniqueVersionStrings, app::fsVersionedType type)
    IL2CPP_REGISTER_METHOD(0x015041D0, void, cctor, )
} // namespace app::classes::FullSerializer::Internal::fsVersionManager
