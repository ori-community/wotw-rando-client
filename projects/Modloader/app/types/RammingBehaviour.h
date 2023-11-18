#pragma once
#include <Modloader/app/structs/RammingBehaviour.h>
#include <Modloader/app/structs/RammingBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingBehaviour {
        inline app::RammingBehaviour__Class** type_info() {
            static app::RammingBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RammingBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RammingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::RammingBehaviour__Class>(type_info(), "Moon", "RammingBehaviour");
        }
        inline app::RammingBehaviour* create() {
            return il2cpp::create_object<app::RammingBehaviour>(get_class());
        }
    } // namespace RammingBehaviour
} // namespace app::classes::types
