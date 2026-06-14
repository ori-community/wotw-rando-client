#pragma once
#include <Modloader/app/structs/MicroProfiler_c.h>
#include <Modloader/app/structs/MicroProfiler_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_c {
        inline app::MicroProfiler_c__Class** type_info() {
            static app::MicroProfiler_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MicroProfiler_c__Class**)(modloader::win::memory::resolve_rva(0x04766D60));
            }
            return cache;
        }
        inline app::MicroProfiler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfiler_c__Class>(type_info(), "", "MicroProfiler", "<>c");
        }
        inline app::MicroProfiler_c* create() {
            return il2cpp::create_object<app::MicroProfiler_c>(get_class());
        }
    } // namespace MicroProfiler_c
} // namespace app::classes::types
