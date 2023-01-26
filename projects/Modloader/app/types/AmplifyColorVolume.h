#pragma once
#include <Modloader/app/structs/AmplifyColorVolume.h>
#include <Modloader/app/structs/AmplifyColorVolume__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmplifyColorVolume {
        inline app::AmplifyColorVolume__Class** type_info() {
            static app::AmplifyColorVolume__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AmplifyColorVolume__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AmplifyColorVolume__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorVolume__Class>(type_info(), "", "AmplifyColorVolume");
        }
        inline app::AmplifyColorVolume* create() {
            return il2cpp::create_object<app::AmplifyColorVolume>(get_class());
        }
    } // namespace AmplifyColorVolume
} // namespace app::classes::types
