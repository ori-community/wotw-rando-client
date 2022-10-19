#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicCubeReference {
        namespace {
            inline app::DynamicCubeReference__Class* type_info_ref = nullptr;
        }
        inline app::DynamicCubeReference__Class** type_info = &type_info_ref;
        inline app::DynamicCubeReference__Class* get_class() {
            return il2cpp::get_class<app::DynamicCubeReference__Class>(type_info, "Moon", "DynamicCubeReference");
        }
        inline app::DynamicCubeReference* create() {
            return il2cpp::create_object<app::DynamicCubeReference>(get_class());
        }
    } // namespace DynamicCubeReference
} // namespace app::classes::types
