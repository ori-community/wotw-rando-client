#pragma once
#include <Modloader/app/structs/SelfDestruct.h>
#include <Modloader/app/structs/SelfDestruct__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SelfDestruct {
        inline app::SelfDestruct__Class** type_info() {
            static app::SelfDestruct__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SelfDestruct__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SelfDestruct__Class* get_class() {
            return il2cpp::get_class<app::SelfDestruct__Class>(type_info(), "", "SelfDestruct");
        }
        inline app::SelfDestruct* create() {
            return il2cpp::create_object<app::SelfDestruct>(get_class());
        }
    } // namespace SelfDestruct
} // namespace app::classes::types
