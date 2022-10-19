#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrameCounter_SecondInfo__Array {
        inline app::FrameCounter_SecondInfo__Array__Class** type_info = (app::FrameCounter_SecondInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0473B5D0));
        inline app::FrameCounter_SecondInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::FrameCounter_SecondInfo__Array__Class>(type_info, "Moon", "FrameCounter+SecondInfo[]");
        }
        inline app::FrameCounter_SecondInfo__Array* create() {
            return il2cpp::create_object<app::FrameCounter_SecondInfo__Array>(get_class());
        }
    } // namespace FrameCounter_SecondInfo__Array
} // namespace app::classes::types
