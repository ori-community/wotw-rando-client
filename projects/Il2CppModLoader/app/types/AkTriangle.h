#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkTriangle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkTriangle__Class** type_info;
        inline app::AkTriangle__Class* get_class() {
            return il2cpp::get_class<app::AkTriangle__Class>(type_info, "", "AkTriangle");
        }
        inline app::AkTriangle* create() {
            return il2cpp::create_object<app::AkTriangle>(get_class());
        }
    } // namespace AkTriangle
} // namespace app::classes::types
