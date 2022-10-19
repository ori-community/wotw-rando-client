#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrameCounter {
        inline app::FrameCounter__Class** type_info = (app::FrameCounter__Class**)(modloader::win::memory::resolve_rva(0x04785D20));
        inline app::FrameCounter__Class* get_class() {
            return il2cpp::get_class<app::FrameCounter__Class>(type_info, "", "FrameCounter");
        }
        inline app::FrameCounter* create() {
            return il2cpp::create_object<app::FrameCounter>(get_class());
        }
    } // namespace FrameCounter
} // namespace app::classes::types
