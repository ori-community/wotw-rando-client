#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrameInfo__Array__Class** type_info;
        inline app::FrameInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::FrameInfo__Array__Class>(type_info, "", "FrameInfo[]");
        }
        inline app::FrameInfo__Array* create() {
            return il2cpp::create_object<app::FrameInfo__Array>(get_class());
        }
    } // namespace FrameInfo__Array
} // namespace app::classes::types
