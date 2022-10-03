#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecorderInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RecorderInput__Class** type_info;
        inline app::RecorderInput__Class* get_class() {
            return il2cpp::get_class<app::RecorderInput__Class>(type_info, "", "RecorderInput");
        }
        inline app::RecorderInput* create() {
            return il2cpp::create_object<app::RecorderInput>(get_class());
        }
    } // namespace RecorderInput
} // namespace app::classes::types
