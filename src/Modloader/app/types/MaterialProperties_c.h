#pragma once
#include <Modloader/app/structs/MaterialProperties_c.h>
#include <Modloader/app/structs/MaterialProperties_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialProperties_c {
        inline app::MaterialProperties_c__Class** type_info() {
            static app::MaterialProperties_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MaterialProperties_c__Class**)(modloader::win::memory::resolve_rva(0x0476FDA0));
            }
            return cache;
        }
        inline app::MaterialProperties_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MaterialProperties_c__Class>(type_info(), "", "MaterialProperties", "<>c");
        }
        inline app::MaterialProperties_c* create() {
            return il2cpp::create_object<app::MaterialProperties_c>(get_class());
        }
    } // namespace MaterialProperties_c
} // namespace app::classes::types
