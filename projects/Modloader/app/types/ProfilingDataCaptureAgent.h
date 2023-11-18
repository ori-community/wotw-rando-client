#pragma once
#include <Modloader/app/structs/ProfilingDataCaptureAgent.h>
#include <Modloader/app/structs/ProfilingDataCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProfilingDataCaptureAgent {
        inline app::ProfilingDataCaptureAgent__Class** type_info() {
            static app::ProfilingDataCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProfilingDataCaptureAgent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProfilingDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::ProfilingDataCaptureAgent__Class>(type_info(), "", "ProfilingDataCaptureAgent");
        }
        inline app::ProfilingDataCaptureAgent* create() {
            return il2cpp::create_object<app::ProfilingDataCaptureAgent>(get_class());
        }
    } // namespace ProfilingDataCaptureAgent
} // namespace app::classes::types
