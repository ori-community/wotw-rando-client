#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChainLevelAndCount {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChainLevelAndCount__Class** type_info;
        inline app::ChainLevelAndCount__Class* get_class() {
            return il2cpp::get_class<app::ChainLevelAndCount__Class>(type_info, "Motvin.Collections", "ChainLevelAndCount");
        }
        inline app::ChainLevelAndCount* create() {
            return il2cpp::create_object<app::ChainLevelAndCount>(get_class());
        }
        inline app::ChainLevelAndCount__Boxed* box(app::ChainLevelAndCount value) {
            return il2cpp::box_value<app::ChainLevelAndCount__Boxed>(get_class(), value);
        }
        inline app::ChainLevelAndCount__Array* create_array(int size) {
            return il2cpp::array_new<app::ChainLevelAndCount__Array>(get_class(), size);
        }
    } // namespace ChainLevelAndCount
} // namespace app::classes::types
