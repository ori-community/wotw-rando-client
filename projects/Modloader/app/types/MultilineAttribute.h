#pragma once
#include <Modloader/app/structs/MultilineAttribute.h>
#include <Modloader/app/structs/MultilineAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultilineAttribute {
        inline app::MultilineAttribute__Class** type_info() {
            static app::MultilineAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultilineAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultilineAttribute__Class* get_class() {
            return il2cpp::get_class<app::MultilineAttribute__Class>(type_info(), "UnityEngine", "MultilineAttribute");
        }
        inline app::MultilineAttribute* create() {
            return il2cpp::create_object<app::MultilineAttribute>(get_class());
        }
    } // namespace MultilineAttribute
} // namespace app::classes::types
