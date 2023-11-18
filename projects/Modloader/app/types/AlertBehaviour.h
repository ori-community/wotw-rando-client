#pragma once
#include <Modloader/app/structs/AlertBehaviour.h>
#include <Modloader/app/structs/AlertBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlertBehaviour {
        inline app::AlertBehaviour__Class** type_info() {
            static app::AlertBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AlertBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AlertBehaviour__Class* get_class() {
            return il2cpp::get_class<app::AlertBehaviour__Class>(type_info(), "Moon", "AlertBehaviour");
        }
        inline app::AlertBehaviour* create() {
            return il2cpp::create_object<app::AlertBehaviour>(get_class());
        }
    } // namespace AlertBehaviour
} // namespace app::classes::types
