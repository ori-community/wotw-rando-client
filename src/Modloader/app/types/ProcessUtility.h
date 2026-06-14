#pragma once
#include <Modloader/app/structs/ProcessUtility.h>
#include <Modloader/app/structs/ProcessUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProcessUtility {
        inline app::ProcessUtility__Class** type_info() {
            static app::ProcessUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProcessUtility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProcessUtility__Class* get_class() {
            return il2cpp::get_class<app::ProcessUtility__Class>(type_info(), "", "ProcessUtility");
        }
        inline app::ProcessUtility* create() {
            return il2cpp::create_object<app::ProcessUtility>(get_class());
        }
    } // namespace ProcessUtility
} // namespace app::classes::types
