#pragma once
#include <Modloader/app/structs/Cubemap.h>
#include <Modloader/app/structs/Cubemap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Cubemap {
        inline app::Cubemap__Class** type_info() {
            static app::Cubemap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Cubemap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Cubemap__Class* get_class() {
            return il2cpp::get_class<app::Cubemap__Class>(type_info(), "UnityEngine", "Cubemap");
        }
        inline app::Cubemap* create() {
            return il2cpp::create_object<app::Cubemap>(get_class());
        }
    } // namespace Cubemap
} // namespace app::classes::types
