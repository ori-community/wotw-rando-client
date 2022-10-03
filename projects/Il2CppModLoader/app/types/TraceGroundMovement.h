#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TraceGroundMovement {
        namespace {
            app::TraceGroundMovement__Class* type_info_ref = nullptr;
        }
        app::TraceGroundMovement__Class** type_info = &type_info_ref;
        inline app::TraceGroundMovement__Class* get_class() {
            return il2cpp::get_class<app::TraceGroundMovement__Class>(type_info, "", "TraceGroundMovement");
        }
        inline app::TraceGroundMovement* create() {
            return il2cpp::create_object<app::TraceGroundMovement>(get_class());
        }
    } // namespace TraceGroundMovement
} // namespace app::classes::types
