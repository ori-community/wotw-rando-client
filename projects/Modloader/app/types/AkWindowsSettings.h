#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkWindowsSettings {
        namespace {
            inline app::AkWindowsSettings__Class* type_info_ref = nullptr;
        }
        inline app::AkWindowsSettings__Class** type_info = &type_info_ref;
        inline app::AkWindowsSettings__Class* get_class() {
            return il2cpp::get_class<app::AkWindowsSettings__Class>(type_info, "", "AkWindowsSettings");
        }
        inline app::AkWindowsSettings* create() {
            return il2cpp::create_object<app::AkWindowsSettings>(get_class());
        }
    } // namespace AkWindowsSettings
} // namespace app::classes::types
