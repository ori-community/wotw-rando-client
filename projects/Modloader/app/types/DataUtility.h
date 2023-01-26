#pragma once
#include <Modloader/app/structs/DataUtility.h>
#include <Modloader/app/structs/DataUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataUtility {
        inline app::DataUtility__Class** type_info() {
            static app::DataUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataUtility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataUtility__Class* get_class() {
            return il2cpp::get_class<app::DataUtility__Class>(type_info(), "UnityEngine.Sprites", "DataUtility");
        }
        inline app::DataUtility* create() {
            return il2cpp::create_object<app::DataUtility>(get_class());
        }
    } // namespace DataUtility
} // namespace app::classes::types
