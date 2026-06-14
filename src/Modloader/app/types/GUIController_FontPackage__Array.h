#pragma once
#include <Modloader/app/structs/GUIController_FontPackage__Array.h>
#include <Modloader/app/structs/GUIController_FontPackage__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIController_FontPackage__Array {
        inline app::GUIController_FontPackage__Array__Class** type_info() {
            static app::GUIController_FontPackage__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUIController_FontPackage__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUIController_FontPackage__Array__Class* get_class() {
            return il2cpp::get_class<app::GUIController_FontPackage__Array__Class>(type_info(), "", "GUIController+FontPackage[]");
        }
        inline app::GUIController_FontPackage__Array* create() {
            return il2cpp::create_object<app::GUIController_FontPackage__Array>(get_class());
        }
    } // namespace GUIController_FontPackage__Array
} // namespace app::classes::types
