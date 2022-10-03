#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SortingLayerID {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SortingLayerID__Class** type_info;
        inline app::SortingLayerID__Class* get_class() {
            return il2cpp::get_class<app::SortingLayerID__Class>(type_info, "", "SortingLayerID");
        }
        inline app::SortingLayerID* create() {
            return il2cpp::create_object<app::SortingLayerID>(get_class());
        }
    } // namespace SortingLayerID
} // namespace app::classes::types
