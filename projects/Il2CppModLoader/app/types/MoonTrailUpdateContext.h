#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTrailUpdateContext {
        namespace {
            app::MoonTrailUpdateContext__Class* type_info_ref = nullptr;
        }
        app::MoonTrailUpdateContext__Class** type_info = &type_info_ref;
        inline app::MoonTrailUpdateContext__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailUpdateContext__Class>(type_info, "Moon", "MoonTrailUpdateContext");
        }
        inline app::MoonTrailUpdateContext* create() {
            return il2cpp::create_object<app::MoonTrailUpdateContext>(get_class());
        }
        inline app::MoonTrailUpdateContext__Boxed* box(app::MoonTrailUpdateContext value) {
            return il2cpp::box_value<app::MoonTrailUpdateContext__Boxed>(get_class(), value);
        }
        inline app::MoonTrailUpdateContext__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTrailUpdateContext__Array>(get_class(), size);
        }
    } // namespace MoonTrailUpdateContext
} // namespace app::classes::types
