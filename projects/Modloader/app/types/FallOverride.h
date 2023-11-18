#pragma once
#include <Modloader/app/structs/FallOverride.h>
#include <Modloader/app/structs/FallOverride__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FallOverride {
        inline app::FallOverride__Class** type_info() {
            static app::FallOverride__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FallOverride__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FallOverride__Class* get_class() {
            return il2cpp::get_class<app::FallOverride__Class>(type_info(), "", "FallOverride");
        }
        inline app::FallOverride* create() {
            return il2cpp::create_object<app::FallOverride>(get_class());
        }
    } // namespace FallOverride
} // namespace app::classes::types
