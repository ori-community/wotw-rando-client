#pragma once
#include <Modloader/app/structs/GUIClipContext.h>
#include <Modloader/app/structs/GUIClipContext__Boxed.h>
#include <Modloader/app/structs/GUIClipContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIClipContext {
        inline app::GUIClipContext__Class** type_info() {
            static app::GUIClipContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUIClipContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUIClipContext__Class* get_class() {
            return il2cpp::get_class<app::GUIClipContext__Class>(type_info(), "Sini.Unity", "GUIClipContext");
        }
        inline app::GUIClipContext* create() {
            return il2cpp::create_object<app::GUIClipContext>(get_class());
        }
        inline app::GUIClipContext__Boxed* box(app::GUIClipContext value) {
            return il2cpp::box_value<app::GUIClipContext__Boxed>(get_class(), value);
        }
    } // namespace GUIClipContext
} // namespace app::classes::types
