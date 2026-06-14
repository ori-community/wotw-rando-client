#pragma once
#include <Modloader/app/structs/MortarSpitBehaviour.h>
#include <Modloader/app/structs/MortarSpitBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarSpitBehaviour {
        inline app::MortarSpitBehaviour__Class** type_info() {
            static app::MortarSpitBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MortarSpitBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MortarSpitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MortarSpitBehaviour__Class>(type_info(), "", "MortarSpitBehaviour");
        }
        inline app::MortarSpitBehaviour* create() {
            return il2cpp::create_object<app::MortarSpitBehaviour>(get_class());
        }
    } // namespace MortarSpitBehaviour
} // namespace app::classes::types
