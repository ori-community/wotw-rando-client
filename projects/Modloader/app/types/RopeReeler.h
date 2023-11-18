#pragma once
#include <Modloader/app/structs/RopeReeler.h>
#include <Modloader/app/structs/RopeReeler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RopeReeler {
        inline app::RopeReeler__Class** type_info() {
            static app::RopeReeler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RopeReeler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RopeReeler__Class* get_class() {
            return il2cpp::get_class<app::RopeReeler__Class>(type_info(), "", "RopeReeler");
        }
        inline app::RopeReeler* create() {
            return il2cpp::create_object<app::RopeReeler>(get_class());
        }
    } // namespace RopeReeler
} // namespace app::classes::types
