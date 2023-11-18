#pragma once
#include <Modloader/app/structs/GLHelper.h>
#include <Modloader/app/structs/GLHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GLHelper {
        inline app::GLHelper__Class** type_info() {
            static app::GLHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GLHelper__Class**)(modloader::win::memory::resolve_rva(0x0476B698));
            }
            return cache;
        }
        inline app::GLHelper__Class* get_class() {
            return il2cpp::get_class<app::GLHelper__Class>(type_info(), "Moon.Telemetry.Performance.visualization", "GLHelper");
        }
        inline app::GLHelper* create() {
            return il2cpp::create_object<app::GLHelper>(get_class());
        }
    } // namespace GLHelper
} // namespace app::classes::types
