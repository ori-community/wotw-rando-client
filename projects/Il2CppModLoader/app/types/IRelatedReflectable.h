#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRelatedReflectable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRelatedReflectable__Class** type_info;
        inline app::IRelatedReflectable__Class* get_class() {
            return il2cpp::get_class<app::IRelatedReflectable__Class>(type_info, "", "IRelatedReflectable");
        }
        inline app::IRelatedReflectable* create() {
            return il2cpp::create_object<app::IRelatedReflectable>(get_class());
        }
    } // namespace IRelatedReflectable
} // namespace app::classes::types
