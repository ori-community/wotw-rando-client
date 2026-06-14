#pragma once
#include <Modloader/app/structs/FPSTestFields_Scope__Enum.h>
#include <Modloader/app/structs/FPSTestFields_Scope__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSTestFields_Scope__Enum {
        inline app::FPSTestFields_Scope__Enum__Class** type_info() {
            static app::FPSTestFields_Scope__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FPSTestFields_Scope__Enum__Class**)(modloader::win::memory::resolve_rva(0x04751800));
            }
            return cache;
        }
        inline app::FPSTestFields_Scope__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FPSTestFields_Scope__Enum__Class>(type_info(), "", "FPSTestFields", "Scope");
        }
        inline app::FPSTestFields_Scope__Enum* create() {
            return il2cpp::create_object<app::FPSTestFields_Scope__Enum>(get_class());
        }
    } // namespace FPSTestFields_Scope__Enum
} // namespace app::classes::types
