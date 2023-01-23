#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProfilingDataCaptureAgent__Class.h>
#include <Modloader/app/structs/ProfilingDataCaptureAgent.h>

namespace app::classes::types {
    namespace ProfilingDataCaptureAgent {
        namespace {
            inline app::ProfilingDataCaptureAgent__Class* type_info_ref = nullptr;
        }
        inline app::ProfilingDataCaptureAgent__Class** type_info = &type_info_ref;
        inline app::ProfilingDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::ProfilingDataCaptureAgent__Class>(type_info, "", "ProfilingDataCaptureAgent");
        }
        inline app::ProfilingDataCaptureAgent* create() {
            return il2cpp::create_object<app::ProfilingDataCaptureAgent>(get_class());
        }
    } // namespace ProfilingDataCaptureAgent
} // namespace app::classes::types
