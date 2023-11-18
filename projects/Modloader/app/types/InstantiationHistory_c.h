#pragma once
#include <Modloader/app/structs/InstantiationHistory_c.h>
#include <Modloader/app/structs/InstantiationHistory_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiationHistory_c {
        inline app::InstantiationHistory_c__Class** type_info() {
            static app::InstantiationHistory_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstantiationHistory_c__Class**)(modloader::win::memory::resolve_rva(0x047894E8));
            }
            return cache;
        }
        inline app::InstantiationHistory_c__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiationHistory_c__Class>(type_info(), "", "InstantiationHistory", "<>c");
        }
        inline app::InstantiationHistory_c* create() {
            return il2cpp::create_object<app::InstantiationHistory_c>(get_class());
        }
    } // namespace InstantiationHistory_c
} // namespace app::classes::types
