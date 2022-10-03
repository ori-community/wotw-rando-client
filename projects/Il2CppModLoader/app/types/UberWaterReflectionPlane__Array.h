#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionPlane__Array {
        namespace {
            app::UberWaterReflectionPlane__Array__Class* type_info_ref = nullptr;
        }
        app::UberWaterReflectionPlane__Array__Class** type_info = &type_info_ref;
        inline app::UberWaterReflectionPlane__Array__Class* get_class() {
            return il2cpp::get_class<app::UberWaterReflectionPlane__Array__Class>(type_info, "", "UberWaterReflectionPlane[]");
        }
        inline app::UberWaterReflectionPlane__Array* create() {
            return il2cpp::create_object<app::UberWaterReflectionPlane__Array>(get_class());
        }
    } // namespace UberWaterReflectionPlane__Array
} // namespace app::classes::types
