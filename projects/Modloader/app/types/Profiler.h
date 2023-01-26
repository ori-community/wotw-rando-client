#pragma once
#include <Modloader/app/structs/Profiler.h>
#include <Modloader/app/structs/Profiler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Profiler {
        inline app::Profiler__Class** type_info() {
            static app::Profiler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Profiler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Profiler__Class* get_class() {
            return il2cpp::get_class<app::Profiler__Class>(type_info(), "UnityEngine.Profiling", "Profiler");
        }
        inline app::Profiler* create() {
            return il2cpp::create_object<app::Profiler>(get_class());
        }
    } // namespace Profiler
} // namespace app::classes::types
