#pragma once
#include <Modloader/app/structs/AmplifyColorVolumeBase.h>
#include <Modloader/app/structs/AmplifyColorVolumeBase__Array.h>
#include <Modloader/app/structs/AmplifyColorVolumeBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmplifyColorVolumeBase {
        inline app::AmplifyColorVolumeBase__Class** type_info() {
            static app::AmplifyColorVolumeBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AmplifyColorVolumeBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AmplifyColorVolumeBase__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorVolumeBase__Class>(type_info(), "", "AmplifyColorVolumeBase");
        }
        inline app::AmplifyColorVolumeBase* create() {
            return il2cpp::create_object<app::AmplifyColorVolumeBase>(get_class());
        }
        inline app::AmplifyColorVolumeBase__Array* create_array(int size) {
            return il2cpp::array_new<app::AmplifyColorVolumeBase__Array>(get_class(), size);
        }
        inline app::AmplifyColorVolumeBase__Array* create_array(const std::vector<app::AmplifyColorVolumeBase*>& items) {
            return il2cpp::array_new<app::AmplifyColorVolumeBase__Array>(get_class(), items);
        }
    } // namespace AmplifyColorVolumeBase
} // namespace app::classes::types
