#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VolumeEffect__Array {
        namespace {
            app::VolumeEffect__Array__Class* type_info_ref = nullptr;
        }
        app::VolumeEffect__Array__Class** type_info = &type_info_ref;
        inline app::VolumeEffect__Array__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffect__Array__Class>(type_info, "AmplifyColor", "VolumeEffect[]");
        }
        inline app::VolumeEffect__Array* create() {
            return il2cpp::create_object<app::VolumeEffect__Array>(get_class());
        }
    } // namespace VolumeEffect__Array
} // namespace app::classes::types
