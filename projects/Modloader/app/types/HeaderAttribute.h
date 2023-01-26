#pragma once
#include <Modloader/app/structs/HeaderAttribute.h>
#include <Modloader/app/structs/HeaderAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HeaderAttribute {
        inline app::HeaderAttribute__Class** type_info() {
            static app::HeaderAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HeaderAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HeaderAttribute__Class* get_class() {
            return il2cpp::get_class<app::HeaderAttribute__Class>(type_info(), "UnityEngine", "HeaderAttribute");
        }
        inline app::HeaderAttribute* create() {
            return il2cpp::create_object<app::HeaderAttribute>(get_class());
        }
    } // namespace HeaderAttribute
} // namespace app::classes::types
