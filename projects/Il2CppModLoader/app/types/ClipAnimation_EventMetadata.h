#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClipAnimation_EventMetadata {
        namespace {
            app::ClipAnimation_EventMetadata__Class* type_info_ref = nullptr;
        }
        app::ClipAnimation_EventMetadata__Class** type_info = &type_info_ref;
        inline app::ClipAnimation_EventMetadata__Class* get_class() {
            return il2cpp::get_nested_class<app::ClipAnimation_EventMetadata__Class>(type_info, "Moon", "ClipAnimation", "EventMetadata");
        }
        inline app::ClipAnimation_EventMetadata* create() {
            return il2cpp::create_object<app::ClipAnimation_EventMetadata>(get_class());
        }
        inline app::ClipAnimation_EventMetadata__Array* create_array(int size) {
            return il2cpp::array_new<app::ClipAnimation_EventMetadata__Array>(get_class(), size);
        }
    } // namespace ClipAnimation_EventMetadata
} // namespace app::classes::types
