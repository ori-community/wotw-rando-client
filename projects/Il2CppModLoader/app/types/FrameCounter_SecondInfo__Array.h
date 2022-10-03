#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameCounter_SecondInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrameCounter_SecondInfo__Array__Class** type_info;
        inline app::FrameCounter_SecondInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::FrameCounter_SecondInfo__Array__Class>(type_info, "Moon", "FrameCounter+SecondInfo[]");
        }
        inline app::FrameCounter_SecondInfo__Array* create() {
            return il2cpp::create_object<app::FrameCounter_SecondInfo__Array>(get_class());
        }
    } // namespace FrameCounter_SecondInfo__Array
} // namespace app::classes::types
