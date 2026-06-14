#pragma once
#include <Modloader/app/structs/ConfigurationSectionGroup.h>
#include <Modloader/app/structs/ConfigurationSectionGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfigurationSectionGroup {
        inline app::ConfigurationSectionGroup__Class** type_info() {
            static app::ConfigurationSectionGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConfigurationSectionGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConfigurationSectionGroup__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationSectionGroup__Class>(type_info(), "System.Configuration", "ConfigurationSectionGroup");
        }
        inline app::ConfigurationSectionGroup* create() {
            return il2cpp::create_object<app::ConfigurationSectionGroup>(get_class());
        }
    } // namespace ConfigurationSectionGroup
} // namespace app::classes::types
