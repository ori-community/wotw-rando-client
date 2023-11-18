#pragma once
#include <Modloader/app/structs/TraceGroundMovementSurfaceProvider.h>
#include <Modloader/app/structs/TraceGroundMovementSurfaceProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TraceGroundMovementSurfaceProvider {
        inline app::TraceGroundMovementSurfaceProvider__Class** type_info() {
            static app::TraceGroundMovementSurfaceProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TraceGroundMovementSurfaceProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TraceGroundMovementSurfaceProvider__Class* get_class() {
            return il2cpp::get_class<app::TraceGroundMovementSurfaceProvider__Class>(type_info(), "", "TraceGroundMovementSurfaceProvider");
        }
        inline app::TraceGroundMovementSurfaceProvider* create() {
            return il2cpp::create_object<app::TraceGroundMovementSurfaceProvider>(get_class());
        }
    } // namespace TraceGroundMovementSurfaceProvider
} // namespace app::classes::types
