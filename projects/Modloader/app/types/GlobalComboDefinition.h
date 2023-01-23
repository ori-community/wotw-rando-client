#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GlobalComboDefinition__Class.h>
#include <Modloader/app/structs/GlobalComboDefinition.h>

namespace app::classes::types {
    namespace GlobalComboDefinition {
        namespace {
            inline app::GlobalComboDefinition__Class* type_info_ref = nullptr;
        }
        inline app::GlobalComboDefinition__Class** type_info = &type_info_ref;
        inline app::GlobalComboDefinition__Class* get_class() {
            return il2cpp::get_class<app::GlobalComboDefinition__Class>(type_info, "Moon.ComboSystem", "GlobalComboDefinition");
        }
        inline app::GlobalComboDefinition* create() {
            return il2cpp::create_object<app::GlobalComboDefinition>(get_class());
        }
    } // namespace GlobalComboDefinition
} // namespace app::classes::types
