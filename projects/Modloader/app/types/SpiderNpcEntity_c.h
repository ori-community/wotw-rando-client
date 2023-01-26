#pragma once
#include <Modloader/app/structs/SpiderNpcEntity_c.h>
#include <Modloader/app/structs/SpiderNpcEntity_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderNpcEntity_c {
        inline app::SpiderNpcEntity_c__Class** type_info() {
            static app::SpiderNpcEntity_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiderNpcEntity_c__Class**)(modloader::win::memory::resolve_rva(0x04795CB0));
            }
            return cache;
        }
        inline app::SpiderNpcEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderNpcEntity_c__Class>(type_info(), "", "SpiderNpcEntity", "<>c");
        }
        inline app::SpiderNpcEntity_c* create() {
            return il2cpp::create_object<app::SpiderNpcEntity_c>(get_class());
        }
    } // namespace SpiderNpcEntity_c
} // namespace app::classes::types
