#pragma once
#include <Modloader/app/structs/DialogGraph.h>
#include <Modloader/app/structs/DialogGraph__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DialogGraph {
        inline app::DialogGraph__Class** type_info() {
            static app::DialogGraph__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DialogGraph__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DialogGraph__Class* get_class() {
            return il2cpp::get_class<app::DialogGraph__Class>(type_info(), "", "DialogGraph");
        }
        inline app::DialogGraph* create() {
            return il2cpp::create_object<app::DialogGraph>(get_class());
        }
    } // namespace DialogGraph
} // namespace app::classes::types
