#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ComponentEditor__Class.h>
#include <Modloader/app/structs/ComponentEditor.h>

namespace app::classes::types {
    namespace ComponentEditor {
        namespace {
            inline app::ComponentEditor__Class* type_info_ref = nullptr;
        }
        inline app::ComponentEditor__Class** type_info = &type_info_ref;
        inline app::ComponentEditor__Class* get_class() {
            return il2cpp::get_class<app::ComponentEditor__Class>(type_info, "System.ComponentModel", "ComponentEditor");
        }
        inline app::ComponentEditor* create() {
            return il2cpp::create_object<app::ComponentEditor>(get_class());
        }
    } // namespace ComponentEditor
} // namespace app::classes::types
