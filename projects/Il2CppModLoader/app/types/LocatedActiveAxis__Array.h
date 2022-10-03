#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocatedActiveAxis__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocatedActiveAxis__Array__Class** type_info;
        inline app::LocatedActiveAxis__Array__Class* get_class() {
            return il2cpp::get_class<app::LocatedActiveAxis__Array__Class>(type_info, "System.Xml.Schema", "LocatedActiveAxis[]");
        }
        inline app::LocatedActiveAxis__Array* create() {
            return il2cpp::create_object<app::LocatedActiveAxis__Array>(get_class());
        }
    } // namespace LocatedActiveAxis__Array
} // namespace app::classes::types
