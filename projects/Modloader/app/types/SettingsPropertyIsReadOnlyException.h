#pragma once
#include <Modloader/app/structs/SettingsPropertyIsReadOnlyException.h>
#include <Modloader/app/structs/SettingsPropertyIsReadOnlyException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsPropertyIsReadOnlyException {
        inline app::SettingsPropertyIsReadOnlyException__Class** type_info() {
            static app::SettingsPropertyIsReadOnlyException__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsPropertyIsReadOnlyException__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsPropertyIsReadOnlyException__Class* get_class() {
            return il2cpp::get_class<app::SettingsPropertyIsReadOnlyException__Class>(type_info(), "System.Configuration", "SettingsPropertyIsReadOnlyException");
        }
        inline app::SettingsPropertyIsReadOnlyException* create() {
            return il2cpp::create_object<app::SettingsPropertyIsReadOnlyException>(get_class());
        }
    } // namespace SettingsPropertyIsReadOnlyException
} // namespace app::classes::types
