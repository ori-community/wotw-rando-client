#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonProfilerFrame {
        namespace {
            inline app::MoonProfilerFrame__Class* type_info_ref = nullptr;
        }
        inline app::MoonProfilerFrame__Class** type_info = &type_info_ref;
        inline app::MoonProfilerFrame__Class* get_class() {
            return il2cpp::get_class<app::MoonProfilerFrame__Class>(type_info, "Moon", "MoonProfilerFrame");
        }
        inline app::MoonProfilerFrame* create() {
            return il2cpp::create_object<app::MoonProfilerFrame>(get_class());
        }
        inline app::MoonProfilerFrame__Boxed* box(app::MoonProfilerFrame value) {
            return il2cpp::box_value<app::MoonProfilerFrame__Boxed>(get_class(), value);
        }
    } // namespace MoonProfilerFrame
} // namespace app::classes::types
