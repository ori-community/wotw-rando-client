#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkCommonPlatformSettings {
        namespace {
            inline app::AkCommonPlatformSettings__Class* type_info_ref = nullptr;
        }
        inline app::AkCommonPlatformSettings__Class** type_info = &type_info_ref;
        inline app::AkCommonPlatformSettings__Class* get_class() {
            return il2cpp::get_class<app::AkCommonPlatformSettings__Class>(type_info, "", "AkCommonPlatformSettings");
        }
        inline app::AkCommonPlatformSettings* create() {
            return il2cpp::create_object<app::AkCommonPlatformSettings>(get_class());
        }
    } // namespace AkCommonPlatformSettings
} // namespace app::classes::types
