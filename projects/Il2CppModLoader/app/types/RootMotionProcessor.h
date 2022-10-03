#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RootMotionProcessor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RootMotionProcessor__Class** type_info;
        inline app::RootMotionProcessor__Class* get_class() {
            return il2cpp::get_class<app::RootMotionProcessor__Class>(type_info, "", "RootMotionProcessor");
        }
        inline app::RootMotionProcessor* create() {
            return il2cpp::create_object<app::RootMotionProcessor>(get_class());
        }
        inline app::RootMotionProcessor__Array* create_array(int size) {
            return il2cpp::array_new<app::RootMotionProcessor__Array>(get_class(), size);
        }
    } // namespace RootMotionProcessor
} // namespace app::classes::types
