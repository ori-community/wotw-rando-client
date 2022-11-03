#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIController_FontPackage {
        namespace {
            inline app::GUIController_FontPackage__Class* type_info_ref = nullptr;
        }
        inline app::GUIController_FontPackage__Class** type_info = &type_info_ref;
        inline app::GUIController_FontPackage__Class* get_class() {
            return il2cpp::get_nested_class<app::GUIController_FontPackage__Class>(type_info, "", "GUIController", "FontPackage");
        }
        inline app::GUIController_FontPackage* create() {
            return il2cpp::create_object<app::GUIController_FontPackage>(get_class());
        }
        inline app::GUIController_FontPackage__Array* create_array(int size) {
            return il2cpp::array_new<app::GUIController_FontPackage__Array>(get_class(), size);
        }
        inline app::GUIController_FontPackage__Array* create_array(const std::vector<app::GUIController_FontPackage*>& items) {
            return il2cpp::array_new<app::GUIController_FontPackage__Array>(get_class(), items);
        }
    } // namespace GUIController_FontPackage
} // namespace app::classes::types
