#pragma once
#include <Modloader/app/structs/HideInInspector.h>
#include <Modloader/app/structs/HideInInspector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HideInInspector {
        inline app::HideInInspector__Class** type_info() {
            static app::HideInInspector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HideInInspector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HideInInspector__Class* get_class() {
            return il2cpp::get_class<app::HideInInspector__Class>(type_info(), "UnityEngine", "HideInInspector");
        }
        inline app::HideInInspector* create() {
            return il2cpp::create_object<app::HideInInspector>(get_class());
        }
    } // namespace HideInInspector
} // namespace app::classes::types
