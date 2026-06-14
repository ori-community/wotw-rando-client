#pragma once
#include <Modloader/app/structs/FPSTestFields_FieldDef__Array.h>
#include <Modloader/app/structs/FPSTestFields_FieldDef__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSTestFields_FieldDef__Array {
        inline app::FPSTestFields_FieldDef__Array__Class** type_info() {
            static app::FPSTestFields_FieldDef__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FPSTestFields_FieldDef__Array__Class**)(modloader::win::memory::resolve_rva(0x0478EBD8));
            }
            return cache;
        }
        inline app::FPSTestFields_FieldDef__Array__Class* get_class() {
            return il2cpp::get_class<app::FPSTestFields_FieldDef__Array__Class>(type_info(), "", "FPSTestFields+FieldDef[]");
        }
        inline app::FPSTestFields_FieldDef__Array* create() {
            return il2cpp::create_object<app::FPSTestFields_FieldDef__Array>(get_class());
        }
    } // namespace FPSTestFields_FieldDef__Array
} // namespace app::classes::types
