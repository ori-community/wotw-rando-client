#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossWormSpitBehaviour {
        namespace {
            inline app::KwolokBossWormSpitBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossWormSpitBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossWormSpitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossWormSpitBehaviour__Class>(type_info, "", "KwolokBossWormSpitBehaviour");
        }
        inline app::KwolokBossWormSpitBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossWormSpitBehaviour>(get_class());
        }
    } // namespace KwolokBossWormSpitBehaviour
} // namespace app::classes::types
