#pragma once
#include <Modloader/app/structs/XboxControllerRenderer.h>
#include <Modloader/app/structs/XboxControllerRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxControllerRenderer {
        inline app::XboxControllerRenderer__Class** type_info() {
            static app::XboxControllerRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XboxControllerRenderer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XboxControllerRenderer__Class* get_class() {
            return il2cpp::get_class<app::XboxControllerRenderer__Class>(type_info(), "", "XboxControllerRenderer");
        }
        inline app::XboxControllerRenderer* create() {
            return il2cpp::create_object<app::XboxControllerRenderer>(get_class());
        }
    } // namespace XboxControllerRenderer
} // namespace app::classes::types
