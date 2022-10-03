#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Asttree__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Asttree__Array__Class** type_info;
        inline app::Asttree__Array__Class* get_class() {
            return il2cpp::get_class<app::Asttree__Array__Class>(type_info, "System.Xml.Schema", "Asttree[]");
        }
        inline app::Asttree__Array* create() {
            return il2cpp::create_object<app::Asttree__Array>(get_class());
        }
    } // namespace Asttree__Array
} // namespace app::classes::types
