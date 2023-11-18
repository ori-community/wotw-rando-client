#pragma once
#include <Modloader/app/structs/SeinBow.h>
#include <Modloader/app/structs/SeinBow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBow {
        inline app::SeinBow__Class** type_info() {
            static app::SeinBow__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinBow__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinBow__Class* get_class() {
            return il2cpp::get_class<app::SeinBow__Class>(type_info(), "", "SeinBow");
        }
        inline app::SeinBow* create() {
            return il2cpp::create_object<app::SeinBow>(get_class());
        }
    } // namespace SeinBow
} // namespace app::classes::types
