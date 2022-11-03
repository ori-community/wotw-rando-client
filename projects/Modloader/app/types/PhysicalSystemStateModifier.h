#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicalSystemStateModifier {
        namespace {
            inline app::PhysicalSystemStateModifier__Class* type_info_ref = nullptr;
        }
        inline app::PhysicalSystemStateModifier__Class** type_info = &type_info_ref;
        inline app::PhysicalSystemStateModifier__Class* get_class() {
            return il2cpp::get_class<app::PhysicalSystemStateModifier__Class>(type_info, "", "PhysicalSystemStateModifier");
        }
        inline app::PhysicalSystemStateModifier* create() {
            return il2cpp::create_object<app::PhysicalSystemStateModifier>(get_class());
        }
    } // namespace PhysicalSystemStateModifier
} // namespace app::classes::types
