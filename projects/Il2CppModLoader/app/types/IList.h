#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IList__Class** type_info;
        inline app::IList__Class* get_class() {
            return il2cpp::get_class<app::IList__Class>(type_info, "System.Collections", "IList");
        }
        inline app::IList__Array* create_array(int size) {
            return il2cpp::array_new<app::IList__Array>(get_class(), size);
        }
    } // namespace IList
} // namespace app::classes::types
