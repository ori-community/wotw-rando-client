#pragma once
#include <Modloader/app/structs/ConceptScreen.h>
#include <Modloader/app/structs/ConceptScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConceptScreen {
        inline app::ConceptScreen__Class** type_info() {
            static app::ConceptScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConceptScreen__Class**)(modloader::win::memory::resolve_rva(0x047516A0));
            }
            return cache;
        }
        inline app::ConceptScreen__Class* get_class() {
            return il2cpp::get_class<app::ConceptScreen__Class>(type_info(), "", "ConceptScreen");
        }
        inline app::ConceptScreen* create() {
            return il2cpp::create_object<app::ConceptScreen>(get_class());
        }
    } // namespace ConceptScreen
} // namespace app::classes::types
