#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossEntity {
        inline app::SpiderBossEntity__Class** type_info = (app::SpiderBossEntity__Class**)(modloader::win::memory::resolve_rva(0x047477C0));
        inline app::SpiderBossEntity__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossEntity__Class>(type_info, "", "SpiderBossEntity");
        }
        inline app::SpiderBossEntity* create() {
            return il2cpp::create_object<app::SpiderBossEntity>(get_class());
        }
    } // namespace SpiderBossEntity
} // namespace app::classes::types
