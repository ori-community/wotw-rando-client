#pragma once
#include <Modloader/app/structs/TesterPlugin.h>
#include <Modloader/app/structs/TesterPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TesterPlugin {
        inline app::TesterPlugin__Class** type_info() {
            static app::TesterPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TesterPlugin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TesterPlugin__Class* get_class() {
            return il2cpp::get_class<app::TesterPlugin__Class>(type_info(), "", "TesterPlugin");
        }
        inline app::TesterPlugin* create() {
            return il2cpp::create_object<app::TesterPlugin>(get_class());
        }
    } // namespace TesterPlugin
} // namespace app::classes::types
