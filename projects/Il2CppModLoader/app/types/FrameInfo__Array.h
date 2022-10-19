#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrameInfo__Array {
        inline app::FrameInfo__Array__Class** type_info = (app::FrameInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04797428));
        inline app::FrameInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::FrameInfo__Array__Class>(type_info, "", "FrameInfo[]");
        }
        inline app::FrameInfo__Array* create() {
            return il2cpp::create_object<app::FrameInfo__Array>(get_class());
        }
    } // namespace FrameInfo__Array
} // namespace app::classes::types
