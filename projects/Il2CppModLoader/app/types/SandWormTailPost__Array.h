#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormTailPost__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SandWormTailPost__Array__Class** type_info;
        inline app::SandWormTailPost__Array__Class* get_class() {
            return il2cpp::get_class<app::SandWormTailPost__Array__Class>(type_info, "", "SandWormTailPost[]");
        }
        inline app::SandWormTailPost__Array* create() {
            return il2cpp::create_object<app::SandWormTailPost__Array>(get_class());
        }
    } // namespace SandWormTailPost__Array
} // namespace app::classes::types
