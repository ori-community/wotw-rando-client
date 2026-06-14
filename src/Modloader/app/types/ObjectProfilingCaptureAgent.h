#pragma once
#include <Modloader/app/structs/ObjectProfilingCaptureAgent.h>
#include <Modloader/app/structs/ObjectProfilingCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectProfilingCaptureAgent {
        inline app::ObjectProfilingCaptureAgent__Class** type_info() {
            static app::ObjectProfilingCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectProfilingCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04751D48));
            }
            return cache;
        }
        inline app::ObjectProfilingCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::ObjectProfilingCaptureAgent__Class>(type_info(), "", "ObjectProfilingCaptureAgent");
        }
        inline app::ObjectProfilingCaptureAgent* create() {
            return il2cpp::create_object<app::ObjectProfilingCaptureAgent>(get_class());
        }
    } // namespace ObjectProfilingCaptureAgent
} // namespace app::classes::types
