#pragma once
#include <Modloader/app/structs/AngularSpring.h>
#include <Modloader/app/structs/AngularSpring__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AngularSpring {
        inline app::AngularSpring__Class** type_info() {
            static app::AngularSpring__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AngularSpring__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AngularSpring__Class* get_class() {
            return il2cpp::get_class<app::AngularSpring__Class>(type_info(), "", "AngularSpring");
        }
        inline app::AngularSpring* create() {
            return il2cpp::create_object<app::AngularSpring>(get_class());
        }
    } // namespace AngularSpring
} // namespace app::classes::types
