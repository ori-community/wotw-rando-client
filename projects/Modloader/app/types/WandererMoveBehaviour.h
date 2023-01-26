#pragma once
#include <Modloader/app/structs/WandererMoveBehaviour.h>
#include <Modloader/app/structs/WandererMoveBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererMoveBehaviour {
        inline app::WandererMoveBehaviour__Class** type_info() {
            static app::WandererMoveBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WandererMoveBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WandererMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererMoveBehaviour__Class>(type_info(), "", "WandererMoveBehaviour");
        }
        inline app::WandererMoveBehaviour* create() {
            return il2cpp::create_object<app::WandererMoveBehaviour>(get_class());
        }
    } // namespace WandererMoveBehaviour
} // namespace app::classes::types
