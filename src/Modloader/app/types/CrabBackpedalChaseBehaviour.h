#pragma once
#include <Modloader/app/structs/CrabBackpedalChaseBehaviour.h>
#include <Modloader/app/structs/CrabBackpedalChaseBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrabBackpedalChaseBehaviour {
        inline app::CrabBackpedalChaseBehaviour__Class** type_info() {
            static app::CrabBackpedalChaseBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrabBackpedalChaseBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrabBackpedalChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CrabBackpedalChaseBehaviour__Class>(type_info(), "Moon", "CrabBackpedalChaseBehaviour");
        }
        inline app::CrabBackpedalChaseBehaviour* create() {
            return il2cpp::create_object<app::CrabBackpedalChaseBehaviour>(get_class());
        }
    } // namespace CrabBackpedalChaseBehaviour
} // namespace app::classes::types
