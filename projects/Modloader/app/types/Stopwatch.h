#pragma once
#include <Modloader/app/structs/Stopwatch.h>
#include <Modloader/app/structs/Stopwatch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Stopwatch {
        inline app::Stopwatch__Class** type_info() {
            static app::Stopwatch__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Stopwatch__Class**)(modloader::win::memory::resolve_rva(0x0471C818));
            }
            return cache;
        }
        inline app::Stopwatch__Class* get_class() {
            return il2cpp::get_class<app::Stopwatch__Class>(type_info(), "System.Diagnostics", "Stopwatch");
        }
        inline app::Stopwatch* create() {
            return il2cpp::create_object<app::Stopwatch>(get_class());
        }
    } // namespace Stopwatch
} // namespace app::classes::types
