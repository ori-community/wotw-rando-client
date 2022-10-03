#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveOptions__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SaveOptions__Enum__Class** type_info;
        inline app::SaveOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::SaveOptions__Enum__Class>(type_info, "System.Xml.Linq", "SaveOptions");
        }
        inline app::SaveOptions__Enum* create() {
            return il2cpp::create_object<app::SaveOptions__Enum>(get_class());
        }
    } // namespace SaveOptions__Enum
} // namespace app::classes::types
