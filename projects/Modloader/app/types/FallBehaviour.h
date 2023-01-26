#pragma once
#include <Modloader/app/structs/FallBehaviour.h>
#include <Modloader/app/structs/FallBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FallBehaviour {
        inline app::FallBehaviour__Class** type_info() {
            static app::FallBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FallBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FallBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FallBehaviour__Class>(type_info(), "", "FallBehaviour");
        }
        inline app::FallBehaviour* create() {
            return il2cpp::create_object<app::FallBehaviour>(get_class());
        }
    } // namespace FallBehaviour
} // namespace app::classes::types
