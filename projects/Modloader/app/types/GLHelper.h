#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GLHelper {
        inline app::GLHelper__Class** type_info = (app::GLHelper__Class**)(modloader::win::memory::resolve_rva(0x0476B698));
        inline app::GLHelper__Class* get_class() {
            return il2cpp::get_class<app::GLHelper__Class>(type_info, "Moon.Telemetry.Performance.visualization", "GLHelper");
        }
        inline app::GLHelper* create() {
            return il2cpp::create_object<app::GLHelper>(get_class());
        }
    } // namespace GLHelper
} // namespace app::classes::types
