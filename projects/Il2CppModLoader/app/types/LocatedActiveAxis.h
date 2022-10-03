#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocatedActiveAxis {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocatedActiveAxis__Class** type_info;
        inline app::LocatedActiveAxis__Class* get_class() {
            return il2cpp::get_class<app::LocatedActiveAxis__Class>(type_info, "System.Xml.Schema", "LocatedActiveAxis");
        }
        inline app::LocatedActiveAxis* create() {
            return il2cpp::create_object<app::LocatedActiveAxis>(get_class());
        }
        inline app::LocatedActiveAxis__Array* create_array(int size) {
            return il2cpp::array_new<app::LocatedActiveAxis__Array>(get_class(), size);
        }
    } // namespace LocatedActiveAxis
} // namespace app::classes::types
