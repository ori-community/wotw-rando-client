#pragma once
#include <Modloader/app/structs/FixFeet.h>
#include <Modloader/app/structs/FixFeet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixFeet {
        inline app::FixFeet__Class** type_info() {
            static app::FixFeet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixFeet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixFeet__Class* get_class() {
            return il2cpp::get_class<app::FixFeet__Class>(type_info(), "RootMotion.Demos", "FixFeet");
        }
        inline app::FixFeet* create() {
            return il2cpp::create_object<app::FixFeet>(get_class());
        }
    } // namespace FixFeet
} // namespace app::classes::types
