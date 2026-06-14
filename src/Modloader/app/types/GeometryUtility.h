#pragma once
#include <Modloader/app/structs/GeometryUtility.h>
#include <Modloader/app/structs/GeometryUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GeometryUtility {
        inline app::GeometryUtility__Class** type_info() {
            static app::GeometryUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GeometryUtility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GeometryUtility__Class* get_class() {
            return il2cpp::get_class<app::GeometryUtility__Class>(type_info(), "UnityEngine", "GeometryUtility");
        }
        inline app::GeometryUtility* create() {
            return il2cpp::create_object<app::GeometryUtility>(get_class());
        }
    } // namespace GeometryUtility
} // namespace app::classes::types
