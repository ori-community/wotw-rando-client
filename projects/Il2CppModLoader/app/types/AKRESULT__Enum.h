#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AKRESULT__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AKRESULT__Enum__Class** type_info;
        inline app::AKRESULT__Enum__Class* get_class() {
            return il2cpp::get_class<app::AKRESULT__Enum__Class>(type_info, "", "AKRESULT");
        }
        inline app::AKRESULT__Enum* create() {
            return il2cpp::create_object<app::AKRESULT__Enum>(get_class());
        }
    } // namespace AKRESULT__Enum
} // namespace app::classes::types
