#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossSettings {
        namespace {
            inline app::KwolokBossSettings__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossSettings__Class** type_info = &type_info_ref;
        inline app::KwolokBossSettings__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossSettings__Class>(type_info, "", "KwolokBossSettings");
        }
        inline app::KwolokBossSettings* create() {
            return il2cpp::create_object<app::KwolokBossSettings>(get_class());
        }
    } // namespace KwolokBossSettings
} // namespace app::classes::types
