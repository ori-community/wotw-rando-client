#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpaException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpaException__Class** type_info;
        inline app::UpaException__Class* get_class() {
            return il2cpp::get_class<app::UpaException__Class>(type_info, "System.Xml.Schema", "UpaException");
        }
        inline app::UpaException* create() {
            return il2cpp::create_object<app::UpaException>(get_class());
        }
    } // namespace UpaException
} // namespace app::classes::types
