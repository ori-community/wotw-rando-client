#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameCounter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrameCounter__Class** type_info;
        inline app::FrameCounter__Class* get_class() {
            return il2cpp::get_class<app::FrameCounter__Class>(type_info, "", "FrameCounter");
        }
        inline app::FrameCounter* create() {
            return il2cpp::create_object<app::FrameCounter>(get_class());
        }
    } // namespace FrameCounter
} // namespace app::classes::types
