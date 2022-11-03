#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectInstantiationCaptureAgent {
        inline app::ObjectInstantiationCaptureAgent__Class** type_info = (app::ObjectInstantiationCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04730538));
        inline app::ObjectInstantiationCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::ObjectInstantiationCaptureAgent__Class>(type_info, "", "ObjectInstantiationCaptureAgent");
        }
        inline app::ObjectInstantiationCaptureAgent* create() {
            return il2cpp::create_object<app::ObjectInstantiationCaptureAgent>(get_class());
        }
    } // namespace ObjectInstantiationCaptureAgent
} // namespace app::classes::types
