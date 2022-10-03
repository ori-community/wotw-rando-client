#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClipAnimation_EventMetadata__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ClipAnimation_EventMetadata__Array__Class** type_info;
        inline app::ClipAnimation_EventMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::ClipAnimation_EventMetadata__Array__Class>(type_info, "Moon", "ClipAnimation+EventMetadata[]");
        }
        inline app::ClipAnimation_EventMetadata__Array* create() {
            return il2cpp::create_object<app::ClipAnimation_EventMetadata__Array>(get_class());
        }
    } // namespace ClipAnimation_EventMetadata__Array
} // namespace app::classes::types
