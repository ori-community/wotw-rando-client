#pragma once
#include <Modloader/app/structs/Cursor.h>
#include <Modloader/app/structs/Cursor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Cursor {
        inline app::Cursor__Class** type_info() {
            static app::Cursor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Cursor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Cursor__Class* get_class() {
            return il2cpp::get_class<app::Cursor__Class>(type_info(), "UnityEngine", "Cursor");
        }
        inline app::Cursor* create() {
            return il2cpp::create_object<app::Cursor>(get_class());
        }
    } // namespace Cursor
} // namespace app::classes::types
