#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NullReferenceException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NullReferenceException__Class** type_info;
        inline app::NullReferenceException__Class* get_class() {
            return il2cpp::get_class<app::NullReferenceException__Class>(type_info, "System", "NullReferenceException");
        }
        inline app::NullReferenceException* create() {
            return il2cpp::create_object<app::NullReferenceException>(get_class());
        }
    } // namespace NullReferenceException
} // namespace app::classes::types
