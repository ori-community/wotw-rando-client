#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEntityOwned {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEntityOwned__Class** type_info;
        inline app::IEntityOwned__Class* get_class() {
            return il2cpp::get_class<app::IEntityOwned__Class>(type_info, "Moon", "IEntityOwned");
        }
        inline app::IEntityOwned__Array* create_array(int size) {
            return il2cpp::array_new<app::IEntityOwned__Array>(get_class(), size);
        }
    } // namespace IEntityOwned
} // namespace app::classes::types
