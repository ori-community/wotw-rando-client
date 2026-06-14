#pragma once
#include <Modloader/app/structs/SkeetoShootBehaviour.h>
#include <Modloader/app/structs/SkeetoShootBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoShootBehaviour {
        inline app::SkeetoShootBehaviour__Class** type_info() {
            static app::SkeetoShootBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoShootBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoShootBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoShootBehaviour__Class>(type_info(), "", "SkeetoShootBehaviour");
        }
        inline app::SkeetoShootBehaviour* create() {
            return il2cpp::create_object<app::SkeetoShootBehaviour>(get_class());
        }
    } // namespace SkeetoShootBehaviour
} // namespace app::classes::types
