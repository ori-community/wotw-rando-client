#pragma once
#include <Modloader/app/structs/StunnBehaviour.h>
#include <Modloader/app/structs/StunnBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StunnBehaviour {
        inline app::StunnBehaviour__Class** type_info() {
            static app::StunnBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StunnBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StunnBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StunnBehaviour__Class>(type_info(), "", "StunnBehaviour");
        }
        inline app::StunnBehaviour* create() {
            return il2cpp::create_object<app::StunnBehaviour>(get_class());
        }
    } // namespace StunnBehaviour
} // namespace app::classes::types
