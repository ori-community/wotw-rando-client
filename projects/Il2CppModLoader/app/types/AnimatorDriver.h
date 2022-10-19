#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimatorDriver {
        inline app::AnimatorDriver__Class** type_info = (app::AnimatorDriver__Class**)(modloader::win::memory::resolve_rva(0x04705478));
        inline app::AnimatorDriver__Class* get_class() {
            return il2cpp::get_class<app::AnimatorDriver__Class>(type_info, "", "AnimatorDriver");
        }
        inline app::AnimatorDriver* create() {
            return il2cpp::create_object<app::AnimatorDriver>(get_class());
        }
    } // namespace AnimatorDriver
} // namespace app::classes::types
