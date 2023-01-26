#pragma once
#include <Modloader/app/structs/AmplifyColorVolumeBase__Array.h>
#include <Modloader/app/structs/AmplifyColorVolumeBase__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmplifyColorVolumeBase__Array {
        inline app::AmplifyColorVolumeBase__Array__Class** type_info() {
            static app::AmplifyColorVolumeBase__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AmplifyColorVolumeBase__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AmplifyColorVolumeBase__Array__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorVolumeBase__Array__Class>(type_info(), "", "AmplifyColorVolumeBase[]");
        }
        inline app::AmplifyColorVolumeBase__Array* create() {
            return il2cpp::create_object<app::AmplifyColorVolumeBase__Array>(get_class());
        }
    } // namespace AmplifyColorVolumeBase__Array
} // namespace app::classes::types
