#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimatingFloat {
        inline app::AnimatingFloat__Class** type_info = (app::AnimatingFloat__Class**)(modloader::win::memory::resolve_rva(0x0476BDA0));
        inline app::AnimatingFloat__Class* get_class() {
            return il2cpp::get_class<app::AnimatingFloat__Class>(type_info, "", "AnimatingFloat");
        }
        inline app::AnimatingFloat* create() {
            return il2cpp::create_object<app::AnimatingFloat>(get_class());
        }
    } // namespace AnimatingFloat
} // namespace app::classes::types
