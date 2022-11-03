#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossEntity_c {
        inline app::SpiderBossEntity_c__Class** type_info = (app::SpiderBossEntity_c__Class**)(modloader::win::memory::resolve_rva(0x04750828));
        inline app::SpiderBossEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossEntity_c__Class>(type_info, "", "SpiderBossEntity", "<>c");
        }
        inline app::SpiderBossEntity_c* create() {
            return il2cpp::create_object<app::SpiderBossEntity_c>(get_class());
        }
    } // namespace SpiderBossEntity_c
} // namespace app::classes::types
