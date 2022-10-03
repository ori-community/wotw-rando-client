#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUIClipContext {
        namespace {
            app::GUIClipContext__Class* type_info_ref = nullptr;
        }
        app::GUIClipContext__Class** type_info = &type_info_ref;
        inline app::GUIClipContext__Class* get_class() {
            return il2cpp::get_class<app::GUIClipContext__Class>(type_info, "Sini.Unity", "GUIClipContext");
        }
        inline app::GUIClipContext* create() {
            return il2cpp::create_object<app::GUIClipContext>(get_class());
        }
        inline app::GUIClipContext__Boxed* box(app::GUIClipContext value) {
            return il2cpp::box_value<app::GUIClipContext__Boxed>(get_class(), value);
        }
    } // namespace GUIClipContext
} // namespace app::classes::types
