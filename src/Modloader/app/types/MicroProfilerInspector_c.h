#pragma once
#include <Modloader/app/structs/MicroProfilerInspector_c.h>
#include <Modloader/app/structs/MicroProfilerInspector_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfilerInspector_c {
        inline app::MicroProfilerInspector_c__Class** type_info() {
            static app::MicroProfilerInspector_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MicroProfilerInspector_c__Class**)(modloader::win::memory::resolve_rva(0x0478EAE8));
            }
            return cache;
        }
        inline app::MicroProfilerInspector_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfilerInspector_c__Class>(type_info(), "", "MicroProfilerInspector", "<>c");
        }
        inline app::MicroProfilerInspector_c* create() {
            return il2cpp::create_object<app::MicroProfilerInspector_c>(get_class());
        }
    } // namespace MicroProfilerInspector_c
} // namespace app::classes::types
