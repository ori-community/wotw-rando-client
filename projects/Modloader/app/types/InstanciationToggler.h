#pragma once
#include <Modloader/app/structs/InstanciationToggler.h>
#include <Modloader/app/structs/InstanciationToggler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstanciationToggler {
        inline app::InstanciationToggler__Class** type_info() {
            static app::InstanciationToggler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InstanciationToggler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InstanciationToggler__Class* get_class() {
            return il2cpp::get_class<app::InstanciationToggler__Class>(type_info(), "", "InstanciationToggler");
        }
        inline app::InstanciationToggler* create() {
            return il2cpp::create_object<app::InstanciationToggler>(get_class());
        }
    } // namespace InstanciationToggler
} // namespace app::classes::types
