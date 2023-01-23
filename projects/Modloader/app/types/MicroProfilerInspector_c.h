#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MicroProfilerInspector_c__Class.h>
#include <Modloader/app/structs/MicroProfilerInspector_c.h>

namespace app::classes::types {
    namespace MicroProfilerInspector_c {
        inline app::MicroProfilerInspector_c__Class** type_info = (app::MicroProfilerInspector_c__Class**)(modloader::win::memory::resolve_rva(0x0478EAE8));
        inline app::MicroProfilerInspector_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfilerInspector_c__Class>(type_info, "", "MicroProfilerInspector", "<>c");
        }
        inline app::MicroProfilerInspector_c* create() {
            return il2cpp::create_object<app::MicroProfilerInspector_c>(get_class());
        }
    } // namespace MicroProfilerInspector_c
} // namespace app::classes::types
