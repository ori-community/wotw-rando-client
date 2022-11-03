#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBatEntity_c {
        inline app::SpiderBatEntity_c__Class** type_info = (app::SpiderBatEntity_c__Class**)(modloader::win::memory::resolve_rva(0x04768088));
        inline app::SpiderBatEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBatEntity_c__Class>(type_info, "", "SpiderBatEntity", "<>c");
        }
        inline app::SpiderBatEntity_c* create() {
            return il2cpp::create_object<app::SpiderBatEntity_c>(get_class());
        }
    } // namespace SpiderBatEntity_c
} // namespace app::classes::types
