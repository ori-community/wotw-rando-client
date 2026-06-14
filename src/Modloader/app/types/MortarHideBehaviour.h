#pragma once
#include <Modloader/app/structs/MortarHideBehaviour.h>
#include <Modloader/app/structs/MortarHideBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarHideBehaviour {
        inline app::MortarHideBehaviour__Class** type_info() {
            static app::MortarHideBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MortarHideBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MortarHideBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MortarHideBehaviour__Class>(type_info(), "", "MortarHideBehaviour");
        }
        inline app::MortarHideBehaviour* create() {
            return il2cpp::create_object<app::MortarHideBehaviour>(get_class());
        }
    } // namespace MortarHideBehaviour
} // namespace app::classes::types
