#pragma once
#include <Modloader/app/structs/ForceBasedFollow.h>
#include <Modloader/app/structs/ForceBasedFollow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ForceBasedFollow {
        inline app::ForceBasedFollow__Class** type_info() {
            static app::ForceBasedFollow__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ForceBasedFollow__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ForceBasedFollow__Class* get_class() {
            return il2cpp::get_class<app::ForceBasedFollow__Class>(type_info(), "", "ForceBasedFollow");
        }
        inline app::ForceBasedFollow* create() {
            return il2cpp::create_object<app::ForceBasedFollow>(get_class());
        }
    } // namespace ForceBasedFollow
} // namespace app::classes::types
