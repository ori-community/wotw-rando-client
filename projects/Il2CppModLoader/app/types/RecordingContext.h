#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecordingContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RecordingContext__Class** type_info;
        inline app::RecordingContext__Class* get_class() {
            return il2cpp::get_class<app::RecordingContext__Class>(type_info, "Moon.Timeline", "RecordingContext");
        }
        inline app::RecordingContext* create() {
            return il2cpp::create_object<app::RecordingContext>(get_class());
        }
        inline app::RecordingContext__Boxed* box(app::RecordingContext value) {
            return il2cpp::box_value<app::RecordingContext__Boxed>(get_class(), value);
        }
    } // namespace RecordingContext
} // namespace app::classes::types
