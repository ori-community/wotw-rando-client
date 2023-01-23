#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MicroProfilerInspector__Class.h>
#include <Modloader/app/structs/MicroProfilerInspector.h>

namespace app::classes::types {
    namespace MicroProfilerInspector {
        inline app::MicroProfilerInspector__Class** type_info = (app::MicroProfilerInspector__Class**)(modloader::win::memory::resolve_rva(0x04732EA8));
        inline app::MicroProfilerInspector__Class* get_class() {
            return il2cpp::get_class<app::MicroProfilerInspector__Class>(type_info, "", "MicroProfilerInspector");
        }
        inline app::MicroProfilerInspector* create() {
            return il2cpp::create_object<app::MicroProfilerInspector>(get_class());
        }
    } // namespace MicroProfilerInspector
} // namespace app::classes::types
