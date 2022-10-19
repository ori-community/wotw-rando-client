#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AmplifyColorVolumeBase {
        namespace {
            inline app::AmplifyColorVolumeBase__Class* type_info_ref = nullptr;
        }
        inline app::AmplifyColorVolumeBase__Class** type_info = &type_info_ref;
        inline app::AmplifyColorVolumeBase__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorVolumeBase__Class>(type_info, "", "AmplifyColorVolumeBase");
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
