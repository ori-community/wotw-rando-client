#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkBasePlatformSettings__Class.h>
#include <Modloader/app/structs/AkBasePlatformSettings.h>

namespace app::classes::types {
    namespace AkBasePlatformSettings {
        namespace {
            inline app::AkBasePlatformSettings__Class* type_info_ref = nullptr;
        }
        inline app::AkBasePlatformSettings__Class** type_info = &type_info_ref;
        inline app::AkBasePlatformSettings__Class* get_class() {
            return il2cpp::get_class<app::AkBasePlatformSettings__Class>(type_info, "", "AkBasePlatformSettings");
        }
        inline app::AkBasePlatformSettings* create() {
            return il2cpp::create_object<app::AkBasePlatformSettings>(get_class());
        }
    } // namespace AkBasePlatformSettings
} // namespace app::classes::types
