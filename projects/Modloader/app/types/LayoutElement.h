#pragma once
#include <Modloader/app/structs/LayoutElement.h>
#include <Modloader/app/structs/LayoutElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LayoutElement {
        inline app::LayoutElement__Class** type_info() {
            static app::LayoutElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LayoutElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LayoutElement__Class* get_class() {
            return il2cpp::get_class<app::LayoutElement__Class>(type_info(), "UnityEngine.UI", "LayoutElement");
        }
        inline app::LayoutElement* create() {
            return il2cpp::create_object<app::LayoutElement>(get_class());
        }
    } // namespace LayoutElement
} // namespace app::classes::types
