#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBatEntity {
        inline app::SpiderBatEntity__Class** type_info = (app::SpiderBatEntity__Class**)(modloader::win::memory::resolve_rva(0x04765BA0));
        inline app::SpiderBatEntity__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatEntity__Class>(type_info, "", "SpiderBatEntity");
        }
        inline app::SpiderBatEntity* create() {
            return il2cpp::create_object<app::SpiderBatEntity>(get_class());
        }
    } // namespace SpiderBatEntity
} // namespace app::classes::types
