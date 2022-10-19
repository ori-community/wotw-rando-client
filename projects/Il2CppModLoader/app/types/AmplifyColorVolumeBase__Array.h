#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AmplifyColorVolumeBase__Array {
        namespace {
            inline app::AmplifyColorVolumeBase__Array__Class* type_info_ref = nullptr;
        }
        inline app::AmplifyColorVolumeBase__Array__Class** type_info = &type_info_ref;
        inline app::AmplifyColorVolumeBase__Array__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorVolumeBase__Array__Class>(type_info, "", "AmplifyColorVolumeBase[]");
        }
        inline app::AmplifyColorVolumeBase__Array* create() {
            return il2cpp::create_object<app::AmplifyColorVolumeBase__Array>(get_class());
        }
    } // namespace AmplifyColorVolumeBase__Array
} // namespace app::classes::types
