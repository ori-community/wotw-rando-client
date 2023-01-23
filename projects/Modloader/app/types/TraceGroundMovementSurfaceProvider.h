#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TraceGroundMovementSurfaceProvider__Class.h>
#include <Modloader/app/structs/TraceGroundMovementSurfaceProvider.h>

namespace app::classes::types {
    namespace TraceGroundMovementSurfaceProvider {
        namespace {
            inline app::TraceGroundMovementSurfaceProvider__Class* type_info_ref = nullptr;
        }
        inline app::TraceGroundMovementSurfaceProvider__Class** type_info = &type_info_ref;
        inline app::TraceGroundMovementSurfaceProvider__Class* get_class() {
            return il2cpp::get_class<app::TraceGroundMovementSurfaceProvider__Class>(type_info, "", "TraceGroundMovementSurfaceProvider");
        }
        inline app::TraceGroundMovementSurfaceProvider* create() {
            return il2cpp::create_object<app::TraceGroundMovementSurfaceProvider>(get_class());
        }
    } // namespace TraceGroundMovementSurfaceProvider
} // namespace app::classes::types
