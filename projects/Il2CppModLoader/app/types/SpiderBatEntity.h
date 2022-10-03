#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBatEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderBatEntity__Class** type_info;
        inline app::SpiderBatEntity__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatEntity__Class>(type_info, "", "SpiderBatEntity");
        }
        inline app::SpiderBatEntity* create() {
            return il2cpp::create_object<app::SpiderBatEntity>(get_class());
        }
    } // namespace SpiderBatEntity
} // namespace app::classes::types
