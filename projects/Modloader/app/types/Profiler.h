#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Profiler {
        namespace {
            inline app::Profiler__Class* type_info_ref = nullptr;
        }
        inline app::Profiler__Class** type_info = &type_info_ref;
        inline app::Profiler__Class* get_class() {
            return il2cpp::get_class<app::Profiler__Class>(type_info, "UnityEngine.Profiling", "Profiler");
        }
        inline app::Profiler* create() {
            return il2cpp::create_object<app::Profiler>(get_class());
        }
    } // namespace Profiler
} // namespace app::classes::types
