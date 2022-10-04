#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPrewarmable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPrewarmable__Class** type_info;
        inline app::IPrewarmable__Class* get_class() {
            return il2cpp::get_class<app::IPrewarmable__Class>(type_info, "", "IPrewarmable");
        }
        inline app::IPrewarmable* create() {
            return il2cpp::create_object<app::IPrewarmable>(get_class());
        }
        inline app::IPrewarmable__Array* create_array(int size) {
            return il2cpp::array_new<app::IPrewarmable__Array>(get_class(), size);
        }
    } // namespace IPrewarmable
} // namespace app::classes::types
