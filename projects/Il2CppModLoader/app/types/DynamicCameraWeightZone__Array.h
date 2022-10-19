#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicCameraWeightZone__Array {
        namespace {
            inline app::DynamicCameraWeightZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::DynamicCameraWeightZone__Array__Class** type_info = &type_info_ref;
        inline app::DynamicCameraWeightZone__Array__Class* get_class() {
            return il2cpp::get_class<app::DynamicCameraWeightZone__Array__Class>(type_info, "", "DynamicCameraWeightZone[]");
        }
        inline app::DynamicCameraWeightZone__Array* create() {
            return il2cpp::create_object<app::DynamicCameraWeightZone__Array>(get_class());
        }
    } // namespace DynamicCameraWeightZone__Array
} // namespace app::classes::types
