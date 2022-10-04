#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IReflectable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IReflectable__Class** type_info;
        inline app::IReflectable__Class* get_class() {
            return il2cpp::get_class<app::IReflectable__Class>(type_info, "", "IReflectable");
        }
        inline app::IReflectable* create() {
            return il2cpp::create_object<app::IReflectable>(get_class());
        }
    } // namespace IReflectable
} // namespace app::classes::types
