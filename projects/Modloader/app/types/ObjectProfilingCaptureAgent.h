#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ObjectProfilingCaptureAgent__Class.h>
#include <Modloader/app/structs/ObjectProfilingCaptureAgent.h>

namespace app::classes::types {
    namespace ObjectProfilingCaptureAgent {
        inline app::ObjectProfilingCaptureAgent__Class** type_info = (app::ObjectProfilingCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04751D48));
        inline app::ObjectProfilingCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::ObjectProfilingCaptureAgent__Class>(type_info, "", "ObjectProfilingCaptureAgent");
        }
        inline app::ObjectProfilingCaptureAgent* create() {
            return il2cpp::create_object<app::ObjectProfilingCaptureAgent>(get_class());
        }
    } // namespace ObjectProfilingCaptureAgent
} // namespace app::classes::types
