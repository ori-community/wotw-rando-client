#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransformRecorderData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransformRecorderData__Class** type_info;
        inline app::TransformRecorderData__Class* get_class() {
            return il2cpp::get_class<app::TransformRecorderData__Class>(type_info, "", "TransformRecorderData");
        }
        inline app::TransformRecorderData* create() {
            return il2cpp::create_object<app::TransformRecorderData>(get_class());
        }
    } // namespace TransformRecorderData
} // namespace app::classes::types
