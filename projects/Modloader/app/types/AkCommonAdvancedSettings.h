#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkCommonAdvancedSettings__Class.h>
#include <Modloader/app/structs/AkCommonAdvancedSettings.h>

namespace app::classes::types {
    namespace AkCommonAdvancedSettings {
        namespace {
            inline app::AkCommonAdvancedSettings__Class* type_info_ref = nullptr;
        }
        inline app::AkCommonAdvancedSettings__Class** type_info = &type_info_ref;
        inline app::AkCommonAdvancedSettings__Class* get_class() {
            return il2cpp::get_class<app::AkCommonAdvancedSettings__Class>(type_info, "", "AkCommonAdvancedSettings");
        }
        inline app::AkCommonAdvancedSettings* create() {
            return il2cpp::create_object<app::AkCommonAdvancedSettings>(get_class());
        }
    } // namespace AkCommonAdvancedSettings
} // namespace app::classes::types
