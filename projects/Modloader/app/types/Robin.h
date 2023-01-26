#pragma once
#include <Modloader/app/structs/Robin.h>
#include <Modloader/app/structs/Robin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Robin {
        inline app::Robin__Class** type_info() {
            static app::Robin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Robin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Robin__Class* get_class() {
            return il2cpp::get_class<app::Robin__Class>(type_info(), "Moon.Hacks", "Robin");
        }
        inline app::Robin* create() {
            return il2cpp::create_object<app::Robin>(get_class());
        }
    } // namespace Robin
} // namespace app::classes::types
