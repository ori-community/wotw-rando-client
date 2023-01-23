#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyHealthBar__Class.h>
#include <Modloader/app/structs/LegacyHealthBar.h>

namespace app::classes::types {
    namespace LegacyHealthBar {
        namespace {
            inline app::LegacyHealthBar__Class* type_info_ref = nullptr;
        }
        inline app::LegacyHealthBar__Class** type_info = &type_info_ref;
        inline app::LegacyHealthBar__Class* get_class() {
            return il2cpp::get_class<app::LegacyHealthBar__Class>(type_info, "", "LegacyHealthBar");
        }
        inline app::LegacyHealthBar* create() {
            return il2cpp::create_object<app::LegacyHealthBar>(get_class());
        }
    } // namespace LegacyHealthBar
} // namespace app::classes::types
