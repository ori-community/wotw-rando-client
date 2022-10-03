#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReviewTargetMetadata__Array {
        namespace {
            app::ReviewTargetMetadata__Array__Class* type_info_ref = nullptr;
        }
        app::ReviewTargetMetadata__Array__Class** type_info = &type_info_ref;
        inline app::ReviewTargetMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::ReviewTargetMetadata__Array__Class>(type_info, "Moon.ReviewFramework", "ReviewTargetMetadata[]");
        }
        inline app::ReviewTargetMetadata__Array* create() {
            return il2cpp::create_object<app::ReviewTargetMetadata__Array>(get_class());
        }
    } // namespace ReviewTargetMetadata__Array
} // namespace app::classes::types
