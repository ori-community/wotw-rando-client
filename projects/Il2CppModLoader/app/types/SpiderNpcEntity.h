#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderNpcEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderNpcEntity__Class** type_info;
        inline app::SpiderNpcEntity__Class* get_class() {
            return il2cpp::get_class<app::SpiderNpcEntity__Class>(type_info, "", "SpiderNpcEntity");
        }
        inline app::SpiderNpcEntity* create() {
            return il2cpp::create_object<app::SpiderNpcEntity>(get_class());
        }
    } // namespace SpiderNpcEntity
} // namespace app::classes::types
