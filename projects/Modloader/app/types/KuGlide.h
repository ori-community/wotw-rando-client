#pragma once
#include <Modloader/app/structs/KuGlide.h>
#include <Modloader/app/structs/KuGlide__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuGlide {
        inline app::KuGlide__Class** type_info() {
            static app::KuGlide__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuGlide__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuGlide__Class* get_class() {
            return il2cpp::get_class<app::KuGlide__Class>(type_info(), "", "KuGlide");
        }
        inline app::KuGlide* create() {
            return il2cpp::create_object<app::KuGlide>(get_class());
        }
    } // namespace KuGlide
} // namespace app::classes::types
