#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialProperties_c {
        inline app::MaterialProperties_c__Class** type_info = (app::MaterialProperties_c__Class**)(modloader::win::memory::resolve_rva(0x0476FDA0));
        inline app::MaterialProperties_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MaterialProperties_c__Class>(type_info, "", "MaterialProperties", "<>c");
        }
        inline app::MaterialProperties_c* create() {
            return il2cpp::create_object<app::MaterialProperties_c>(get_class());
        }
    } // namespace MaterialProperties_c
} // namespace app::classes::types
