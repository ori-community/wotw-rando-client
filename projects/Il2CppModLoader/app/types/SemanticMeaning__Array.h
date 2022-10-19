#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SemanticMeaning__Array {
        inline app::SemanticMeaning__Array__Class** type_info = (app::SemanticMeaning__Array__Class**)(modloader::win::memory::resolve_rva(0x04747A10));
        inline app::SemanticMeaning__Array__Class* get_class() {
            return il2cpp::get_class<app::SemanticMeaning__Array__Class>(type_info, "UnityEngine.Windows.Speech", "SemanticMeaning[]");
        }
        inline app::SemanticMeaning__Array* create() {
            return il2cpp::create_object<app::SemanticMeaning__Array>(get_class());
        }
    } // namespace SemanticMeaning__Array
} // namespace app::classes::types
