#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecorderFrame {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RecorderFrame__Class** type_info;
        inline app::RecorderFrame__Class* get_class() {
            return il2cpp::get_class<app::RecorderFrame__Class>(type_info, "", "RecorderFrame");
        }
        inline app::RecorderFrame* create() {
            return il2cpp::create_object<app::RecorderFrame>(get_class());
        }
        inline app::RecorderFrame__Array* create_array(int size) {
            return il2cpp::array_new<app::RecorderFrame__Array>(get_class(), size);
        }
    } // namespace RecorderFrame
} // namespace app::classes::types
