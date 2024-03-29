#pragma once
#include <Modloader/app/structs/NanoProfiler_c.h>
#include <Modloader/app/structs/NanoProfiler_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NanoProfiler_c {
        inline app::NanoProfiler_c__Class** type_info() {
            static app::NanoProfiler_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NanoProfiler_c__Class**)(modloader::win::memory::resolve_rva(0x0474A7B8));
            }
            return cache;
        }
        inline app::NanoProfiler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::NanoProfiler_c__Class>(type_info(), "Moon.nanoProfiler", "NanoProfiler", "<>c");
        }
        inline app::NanoProfiler_c* create() {
            return il2cpp::create_object<app::NanoProfiler_c>(get_class());
        }
    } // namespace NanoProfiler_c
} // namespace app::classes::types
