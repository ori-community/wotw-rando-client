#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossWormSpitBehaviour_WormInfo__Array {
        namespace {
            app::KwolokBossWormSpitBehaviour_WormInfo__Array__Class* type_info_ref = nullptr;
        }
        app::KwolokBossWormSpitBehaviour_WormInfo__Array__Class** type_info = &type_info_ref;
        inline app::KwolokBossWormSpitBehaviour_WormInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossWormSpitBehaviour_WormInfo__Array__Class>(type_info, "", "KwolokBossWormSpitBehaviour+WormInfo[]");
        }
        inline app::KwolokBossWormSpitBehaviour_WormInfo__Array* create() {
            return il2cpp::create_object<app::KwolokBossWormSpitBehaviour_WormInfo__Array>(get_class());
        }
    } // namespace KwolokBossWormSpitBehaviour_WormInfo__Array
} // namespace app::classes::types
