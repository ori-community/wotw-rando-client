#pragma once
#include <Modloader/app/structs/JumpGrid.h>
#include <Modloader/app/structs/JumpGrid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpGrid {
        inline app::JumpGrid__Class** type_info() {
            static app::JumpGrid__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumpGrid__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumpGrid__Class* get_class() {
            return il2cpp::get_class<app::JumpGrid__Class>(type_info(), "", "JumpGrid");
        }
        inline app::JumpGrid* create() {
            return il2cpp::create_object<app::JumpGrid>(get_class());
        }
    } // namespace JumpGrid
} // namespace app::classes::types
