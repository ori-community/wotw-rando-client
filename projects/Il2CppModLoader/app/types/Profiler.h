#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Profiler {
        namespace {
            app::Profiler__Class* type_info_ref = nullptr;
        }
        app::Profiler__Class** type_info = &type_info_ref;
        inline app::Profiler__Class* get_class() {
            return il2cpp::get_class<app::Profiler__Class>(type_info, "UnityEngine.Profiling", "Profiler");
        }
        inline app::Profiler* create() {
            return il2cpp::create_object<app::Profiler>(get_class());
        }
    } // namespace Profiler
} // namespace app::classes::types
