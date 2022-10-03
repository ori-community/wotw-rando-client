#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransformRecordable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransformRecordable__Class** type_info;
        inline app::TransformRecordable__Class* get_class() {
            return il2cpp::get_class<app::TransformRecordable__Class>(type_info, "", "TransformRecordable");
        }
        inline app::TransformRecordable* create() {
            return il2cpp::create_object<app::TransformRecordable>(get_class());
        }
        inline app::TransformRecordable__Array* create_array(int size) {
            return il2cpp::array_new<app::TransformRecordable__Array>(get_class(), size);
        }
    } // namespace TransformRecordable
} // namespace app::classes::types
