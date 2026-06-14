#pragma once
#include <Modloader/app/structs/NestedContainer.h>
#include <Modloader/app/structs/NestedContainer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NestedContainer {
        inline app::NestedContainer__Class** type_info() {
            static app::NestedContainer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NestedContainer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NestedContainer__Class* get_class() {
            return il2cpp::get_class<app::NestedContainer__Class>(type_info(), "System.ComponentModel", "NestedContainer");
        }
        inline app::NestedContainer* create() {
            return il2cpp::create_object<app::NestedContainer>(get_class());
        }
    } // namespace NestedContainer
} // namespace app::classes::types
