#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KSStruct {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KSStruct__Class** type_info;
        inline app::KSStruct__Class* get_class() {
            return il2cpp::get_class<app::KSStruct__Class>(type_info, "System.Xml.Schema", "KSStruct");
        }
        inline app::KSStruct* create() {
            return il2cpp::create_object<app::KSStruct>(get_class());
        }
    } // namespace KSStruct
} // namespace app::classes::types
