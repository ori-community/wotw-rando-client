#pragma once
#include <Modloader/app/structs/ConceptScreen_c_DisplayClass22_0.h>
#include <Modloader/app/structs/ConceptScreen_c_DisplayClass22_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConceptScreen_c_DisplayClass22_0 {
        inline app::ConceptScreen_c_DisplayClass22_0__Class** type_info() {
            static app::ConceptScreen_c_DisplayClass22_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConceptScreen_c_DisplayClass22_0__Class**)(modloader::win::memory::resolve_rva(0x04736C98));
            }
            return cache;
        }
        inline app::ConceptScreen_c_DisplayClass22_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ConceptScreen_c_DisplayClass22_0__Class>(type_info(), "", "ConceptScreen", "<>c__DisplayClass22_0");
        }
        inline app::ConceptScreen_c_DisplayClass22_0* create() {
            return il2cpp::create_object<app::ConceptScreen_c_DisplayClass22_0>(get_class());
        }
    } // namespace ConceptScreen_c_DisplayClass22_0
} // namespace app::classes::types
