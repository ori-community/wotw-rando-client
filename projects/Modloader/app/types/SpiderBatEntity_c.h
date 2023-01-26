#pragma once
#include <Modloader/app/structs/SpiderBatEntity_c.h>
#include <Modloader/app/structs/SpiderBatEntity_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatEntity_c {
        inline app::SpiderBatEntity_c__Class** type_info() {
            static app::SpiderBatEntity_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiderBatEntity_c__Class**)(modloader::win::memory::resolve_rva(0x04768088));
            }
            return cache;
        }
        inline app::SpiderBatEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBatEntity_c__Class>(type_info(), "", "SpiderBatEntity", "<>c");
        }
        inline app::SpiderBatEntity_c* create() {
            return il2cpp::create_object<app::SpiderBatEntity_c>(get_class());
        }
    } // namespace SpiderBatEntity_c
} // namespace app::classes::types
