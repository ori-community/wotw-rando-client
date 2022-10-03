#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCText {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CCText__Class** type_info;
        inline app::CCText__Class* get_class() {
            return il2cpp::get_class<app::CCText__Class>(type_info, "", "CCText");
        }
        inline app::CCText* create() {
            return il2cpp::create_object<app::CCText>(get_class());
        }
        inline app::CCText__Array* create_array(int size) {
            return il2cpp::array_new<app::CCText__Array>(get_class(), size);
        }
    } // namespace CCText
} // namespace app::classes::types
