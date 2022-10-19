#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayLoopAnimation_c {
        inline app::PlayLoopAnimation_c__Class** type_info = (app::PlayLoopAnimation_c__Class**)(modloader::win::memory::resolve_rva(0x04787B10));
        inline app::PlayLoopAnimation_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayLoopAnimation_c__Class>(type_info, "", "PlayLoopAnimation", "<>c");
        }
        inline app::PlayLoopAnimation_c* create() {
            return il2cpp::create_object<app::PlayLoopAnimation_c>(get_class());
        }
    } // namespace PlayLoopAnimation_c
} // namespace app::classes::types
