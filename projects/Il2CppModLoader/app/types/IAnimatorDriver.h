#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAnimatorDriver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAnimatorDriver__Class** type_info;
        inline app::IAnimatorDriver__Class* get_class() {
            return il2cpp::get_class<app::IAnimatorDriver__Class>(type_info, "", "IAnimatorDriver");
        }
        inline app::IAnimatorDriver* create() {
            return il2cpp::create_object<app::IAnimatorDriver>(get_class());
        }
    } // namespace IAnimatorDriver
} // namespace app::classes::types
