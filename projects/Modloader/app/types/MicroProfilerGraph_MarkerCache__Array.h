#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MicroProfilerGraph_MarkerCache__Array__Class.h>
#include <Modloader/app/structs/MicroProfilerGraph_MarkerCache__Array.h>

namespace app::classes::types {
    namespace MicroProfilerGraph_MarkerCache__Array {
        namespace {
            inline app::MicroProfilerGraph_MarkerCache__Array__Class* type_info_ref = nullptr;
        }
        inline app::MicroProfilerGraph_MarkerCache__Array__Class** type_info = &type_info_ref;
        inline app::MicroProfilerGraph_MarkerCache__Array__Class* get_class() {
            return il2cpp::get_class<app::MicroProfilerGraph_MarkerCache__Array__Class>(type_info, "", "MicroProfilerGraph+MarkerCache[]");
        }
        inline app::MicroProfilerGraph_MarkerCache__Array* create() {
            return il2cpp::create_object<app::MicroProfilerGraph_MarkerCache__Array>(get_class());
        }
    } // namespace MicroProfilerGraph_MarkerCache__Array
} // namespace app::classes::types
