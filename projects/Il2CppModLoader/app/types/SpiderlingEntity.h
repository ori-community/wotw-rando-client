#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderlingEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderlingEntity__Class** type_info;
        inline app::SpiderlingEntity__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingEntity__Class>(type_info, "", "SpiderlingEntity");
        }
        inline app::SpiderlingEntity* create() {
            return il2cpp::create_object<app::SpiderlingEntity>(get_class());
        }
    } // namespace SpiderlingEntity
} // namespace app::classes::types
