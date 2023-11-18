#pragma once
#include <Modloader/app/structs/GUIContextNonAlloc.h>
#include <Modloader/app/structs/GUIContextNonAlloc__Boxed.h>
#include <Modloader/app/structs/GUIContextNonAlloc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIContextNonAlloc {
        inline app::GUIContextNonAlloc__Class** type_info() {
            static app::GUIContextNonAlloc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUIContextNonAlloc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUIContextNonAlloc__Class* get_class() {
            return il2cpp::get_class<app::GUIContextNonAlloc__Class>(type_info(), "Sini.Unity", "GUIContextNonAlloc");
        }
        inline app::GUIContextNonAlloc* create() {
            return il2cpp::create_object<app::GUIContextNonAlloc>(get_class());
        }
        inline app::GUIContextNonAlloc__Boxed* box(app::GUIContextNonAlloc value) {
            return il2cpp::box_value<app::GUIContextNonAlloc__Boxed>(get_class(), value);
        }
    } // namespace GUIContextNonAlloc
} // namespace app::classes::types
