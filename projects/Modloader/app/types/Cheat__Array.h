#pragma once
#include <Modloader/app/structs/Cheat__Array.h>
#include <Modloader/app/structs/Cheat__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Cheat__Array {
        inline app::Cheat__Array__Class** type_info() {
            static app::Cheat__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Cheat__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Cheat__Array__Class* get_class() {
            return il2cpp::get_class<app::Cheat__Array__Class>(type_info(), "", "Cheat[]");
        }
        inline app::Cheat__Array* create() {
            return il2cpp::create_object<app::Cheat__Array>(get_class());
        }
    } // namespace Cheat__Array
} // namespace app::classes::types
