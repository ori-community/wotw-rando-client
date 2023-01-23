#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MicroProfiler_SampleStats__Array__Class.h>
#include <Modloader/app/structs/MicroProfiler_SampleStats__Array.h>

namespace app::classes::types {
    namespace MicroProfiler_SampleStats__Array {
        namespace {
            inline app::MicroProfiler_SampleStats__Array__Class* type_info_ref = nullptr;
        }
        inline app::MicroProfiler_SampleStats__Array__Class** type_info = &type_info_ref;
        inline app::MicroProfiler_SampleStats__Array__Class* get_class() {
            return il2cpp::get_class<app::MicroProfiler_SampleStats__Array__Class>(type_info, "", "MicroProfiler+SampleStats[]");
        }
        inline app::MicroProfiler_SampleStats__Array* create() {
            return il2cpp::create_object<app::MicroProfiler_SampleStats__Array>(get_class());
        }
    } // namespace MicroProfiler_SampleStats__Array
} // namespace app::classes::types
