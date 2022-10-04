#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDtdEntityInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDtdEntityInfo__Class** type_info;
        inline app::IDtdEntityInfo__Class* get_class() {
            return il2cpp::get_class<app::IDtdEntityInfo__Class>(type_info, "System.Xml", "IDtdEntityInfo");
        }
        inline app::IDtdEntityInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::IDtdEntityInfo__Array>(get_class(), size);
        }
    } // namespace IDtdEntityInfo
} // namespace app::classes::types
