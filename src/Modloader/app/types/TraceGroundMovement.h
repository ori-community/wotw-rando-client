#pragma once
#include <Modloader/app/structs/TraceGroundMovement.h>
#include <Modloader/app/structs/TraceGroundMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TraceGroundMovement {
        inline app::TraceGroundMovement__Class** type_info() {
            static app::TraceGroundMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TraceGroundMovement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TraceGroundMovement__Class* get_class() {
            return il2cpp::get_class<app::TraceGroundMovement__Class>(type_info(), "", "TraceGroundMovement");
        }
        inline app::TraceGroundMovement* create() {
            return il2cpp::create_object<app::TraceGroundMovement>(get_class());
        }
    } // namespace TraceGroundMovement
} // namespace app::classes::types
