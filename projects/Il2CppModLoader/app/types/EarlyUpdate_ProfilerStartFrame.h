#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_ProfilerStartFrame {
        namespace {
            app::EarlyUpdate_ProfilerStartFrame__Class* type_info_ref = nullptr;
        }
        app::EarlyUpdate_ProfilerStartFrame__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_ProfilerStartFrame__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_ProfilerStartFrame__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "ProfilerStartFrame");
        }
        inline app::EarlyUpdate_ProfilerStartFrame* create() {
            return il2cpp::create_object<app::EarlyUpdate_ProfilerStartFrame>(get_class());
        }
        inline app::EarlyUpdate_ProfilerStartFrame__Boxed* box(app::EarlyUpdate_ProfilerStartFrame value) {
            return il2cpp::box_value<app::EarlyUpdate_ProfilerStartFrame__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_ProfilerStartFrame
} // namespace app::classes::types
