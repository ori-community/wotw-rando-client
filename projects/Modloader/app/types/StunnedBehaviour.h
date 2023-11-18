#pragma once
#include <Modloader/app/structs/StunnedBehaviour.h>
#include <Modloader/app/structs/StunnedBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StunnedBehaviour {
        inline app::StunnedBehaviour__Class** type_info() {
            static app::StunnedBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StunnedBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StunnedBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StunnedBehaviour__Class>(type_info(), "", "StunnedBehaviour");
        }
        inline app::StunnedBehaviour* create() {
            return il2cpp::create_object<app::StunnedBehaviour>(get_class());
        }
    } // namespace StunnedBehaviour
} // namespace app::classes::types
