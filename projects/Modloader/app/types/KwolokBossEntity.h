#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossEntity {
        inline app::KwolokBossEntity__Class** type_info = (app::KwolokBossEntity__Class**)(modloader::win::memory::resolve_rva(0x04757790));
        inline app::KwolokBossEntity__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossEntity__Class>(type_info, "", "KwolokBossEntity");
        }
        inline app::KwolokBossEntity* create() {
            return il2cpp::create_object<app::KwolokBossEntity>(get_class());
        }
    } // namespace KwolokBossEntity
} // namespace app::classes::types
