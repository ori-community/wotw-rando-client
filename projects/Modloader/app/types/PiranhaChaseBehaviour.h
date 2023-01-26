#pragma once
#include <Modloader/app/structs/PiranhaChaseBehaviour.h>
#include <Modloader/app/structs/PiranhaChaseBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PiranhaChaseBehaviour {
        inline app::PiranhaChaseBehaviour__Class** type_info() {
            static app::PiranhaChaseBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PiranhaChaseBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PiranhaChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaChaseBehaviour__Class>(type_info(), "", "PiranhaChaseBehaviour");
        }
        inline app::PiranhaChaseBehaviour* create() {
            return il2cpp::create_object<app::PiranhaChaseBehaviour>(get_class());
        }
    } // namespace PiranhaChaseBehaviour
} // namespace app::classes::types
