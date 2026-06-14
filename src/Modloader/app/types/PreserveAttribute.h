#pragma once
#include <Modloader/app/structs/PreserveAttribute.h>
#include <Modloader/app/structs/PreserveAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreserveAttribute {
        inline app::PreserveAttribute__Class** type_info() {
            static app::PreserveAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreserveAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreserveAttribute__Class* get_class() {
            return il2cpp::get_class<app::PreserveAttribute__Class>(type_info(), "UnityEngine.Scripting", "PreserveAttribute");
        }
        inline app::PreserveAttribute* create() {
            return il2cpp::create_object<app::PreserveAttribute>(get_class());
        }
    } // namespace PreserveAttribute
} // namespace app::classes::types
