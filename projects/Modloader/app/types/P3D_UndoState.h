#pragma once
#include <Modloader/app/structs/P3D_UndoState.h>
#include <Modloader/app/structs/P3D_UndoState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace P3D_UndoState {
        inline app::P3D_UndoState__Class** type_info() {
            static app::P3D_UndoState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::P3D_UndoState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::P3D_UndoState__Class* get_class() {
            return il2cpp::get_class<app::P3D_UndoState__Class>(type_info(), "", "P3D_UndoState");
        }
        inline app::P3D_UndoState* create() {
            return il2cpp::create_object<app::P3D_UndoState>(get_class());
        }
    } // namespace P3D_UndoState
} // namespace app::classes::types
