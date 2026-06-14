#pragma once
#include <Modloader/app/structs/SplatterSpray.h>
#include <Modloader/app/structs/SplatterSpray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SplatterSpray {
        inline app::SplatterSpray__Class** type_info() {
            static app::SplatterSpray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SplatterSpray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SplatterSpray__Class* get_class() {
            return il2cpp::get_class<app::SplatterSpray__Class>(type_info(), "", "SplatterSpray");
        }
        inline app::SplatterSpray* create() {
            return il2cpp::create_object<app::SplatterSpray>(get_class());
        }
    } // namespace SplatterSpray
} // namespace app::classes::types
