#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCDistanceMapGenerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CCDistanceMapGenerator__Class** type_info;
        inline app::CCDistanceMapGenerator__Class* get_class() {
            return il2cpp::get_class<app::CCDistanceMapGenerator__Class>(type_info, "", "CCDistanceMapGenerator");
        }
        inline app::CCDistanceMapGenerator* create() {
            return il2cpp::create_object<app::CCDistanceMapGenerator>(get_class());
        }
    } // namespace CCDistanceMapGenerator
} // namespace app::classes::types
