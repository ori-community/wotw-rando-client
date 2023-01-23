#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GUIController_FontPackage__Array__Class.h>
#include <Modloader/app/structs/GUIController_FontPackage__Array.h>

namespace app::classes::types {
    namespace GUIController_FontPackage__Array {
        namespace {
            inline app::GUIController_FontPackage__Array__Class* type_info_ref = nullptr;
        }
        inline app::GUIController_FontPackage__Array__Class** type_info = &type_info_ref;
        inline app::GUIController_FontPackage__Array__Class* get_class() {
            return il2cpp::get_class<app::GUIController_FontPackage__Array__Class>(type_info, "", "GUIController+FontPackage[]");
        }
        inline app::GUIController_FontPackage__Array* create() {
            return il2cpp::create_object<app::GUIController_FontPackage__Array>(get_class());
        }
    } // namespace GUIController_FontPackage__Array
} // namespace app::classes::types
