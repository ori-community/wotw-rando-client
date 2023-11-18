#pragma once
#include <Modloader/app/structs/AmplifyColorVolume2D.h>
#include <Modloader/app/structs/AmplifyColorVolume2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmplifyColorVolume2D {
        inline app::AmplifyColorVolume2D__Class** type_info() {
            static app::AmplifyColorVolume2D__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AmplifyColorVolume2D__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AmplifyColorVolume2D__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorVolume2D__Class>(type_info(), "", "AmplifyColorVolume2D");
        }
        inline app::AmplifyColorVolume2D* create() {
            return il2cpp::create_object<app::AmplifyColorVolume2D>(get_class());
        }
    } // namespace AmplifyColorVolume2D
} // namespace app::classes::types
