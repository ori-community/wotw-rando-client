#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGenericResourceEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IGenericResourceEnumerator__Class** type_info;
        inline app::IGenericResourceEnumerator__Class* get_class() {
            return il2cpp::get_class<app::IGenericResourceEnumerator__Class>(type_info, "", "IGenericResourceEnumerator");
        }
        inline app::IGenericResourceEnumerator* create() {
            return il2cpp::create_object<app::IGenericResourceEnumerator>(get_class());
        }
    } // namespace IGenericResourceEnumerator
} // namespace app::classes::types
