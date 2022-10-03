#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DrawingContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DrawingContext__Class** type_info;
        inline app::DrawingContext__Class* get_class() {
            return il2cpp::get_class<app::DrawingContext__Class>(type_info, "Moon.Telemetry", "DrawingContext");
        }
        inline app::DrawingContext* create() {
            return il2cpp::create_object<app::DrawingContext>(get_class());
        }
        inline app::DrawingContext__Boxed* box(app::DrawingContext value) {
            return il2cpp::box_value<app::DrawingContext__Boxed>(get_class(), value);
        }
    } // namespace DrawingContext
} // namespace app::classes::types
