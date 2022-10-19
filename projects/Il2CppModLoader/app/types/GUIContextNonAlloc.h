#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIContextNonAlloc {
        namespace {
            inline app::GUIContextNonAlloc__Class* type_info_ref = nullptr;
        }
        inline app::GUIContextNonAlloc__Class** type_info = &type_info_ref;
        inline app::GUIContextNonAlloc__Class* get_class() {
            return il2cpp::get_class<app::GUIContextNonAlloc__Class>(type_info, "Sini.Unity", "GUIContextNonAlloc");
        }
        inline app::GUIContextNonAlloc* create() {
            return il2cpp::create_object<app::GUIContextNonAlloc>(get_class());
        }
        inline app::GUIContextNonAlloc__Boxed* box(app::GUIContextNonAlloc value) {
            return il2cpp::box_value<app::GUIContextNonAlloc__Boxed>(get_class(), value);
        }
    } // namespace GUIContextNonAlloc
} // namespace app::classes::types
