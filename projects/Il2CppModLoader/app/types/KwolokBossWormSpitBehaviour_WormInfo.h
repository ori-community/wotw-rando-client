#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossWormSpitBehaviour_WormInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossWormSpitBehaviour_WormInfo__Class** type_info;
        inline app::KwolokBossWormSpitBehaviour_WormInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossWormSpitBehaviour_WormInfo__Class>(type_info, "", "KwolokBossWormSpitBehaviour", "WormInfo");
        }
        inline app::KwolokBossWormSpitBehaviour_WormInfo* create() {
            return il2cpp::create_object<app::KwolokBossWormSpitBehaviour_WormInfo>(get_class());
        }
        inline app::KwolokBossWormSpitBehaviour_WormInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::KwolokBossWormSpitBehaviour_WormInfo__Array>(get_class(), size);
        }
    } // namespace KwolokBossWormSpitBehaviour_WormInfo
} // namespace app::classes::types
