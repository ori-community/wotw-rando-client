#pragma once
#include <Modloader/app/structs/Initialization.h>
#include <Modloader/app/structs/Initialization__Boxed.h>
#include <Modloader/app/structs/Initialization__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Initialization {
        inline app::Initialization__Class** type_info() {
            static app::Initialization__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Initialization__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Initialization__Class* get_class() {
            return il2cpp::get_class<app::Initialization__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "Initialization");
        }
        inline app::Initialization* create() {
            return il2cpp::create_object<app::Initialization>(get_class());
        }
        inline app::Initialization__Boxed* box(app::Initialization value) {
            return il2cpp::box_value<app::Initialization__Boxed>(get_class(), value);
        }
    } // namespace Initialization
} // namespace app::classes::types
