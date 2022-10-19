#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderEnemy2 {
        namespace {
            inline app::SpiderEnemy2__Class* type_info_ref = nullptr;
        }
        inline app::SpiderEnemy2__Class** type_info = &type_info_ref;
        inline app::SpiderEnemy2__Class* get_class() {
            return il2cpp::get_class<app::SpiderEnemy2__Class>(type_info, "", "SpiderEnemy2");
        }
        inline app::SpiderEnemy2* create() {
            return il2cpp::create_object<app::SpiderEnemy2>(get_class());
        }
    } // namespace SpiderEnemy2
} // namespace app::classes::types
