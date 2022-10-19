#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationParameterSet {
        inline app::AnimationParameterSet__Class** type_info = (app::AnimationParameterSet__Class**)(modloader::win::memory::resolve_rva(0x0474F858));
        inline app::AnimationParameterSet__Class* get_class() {
            return il2cpp::get_class<app::AnimationParameterSet__Class>(type_info, "Moon", "AnimationParameterSet");
        }
        inline app::AnimationParameterSet* create() {
            return il2cpp::create_object<app::AnimationParameterSet>(get_class());
        }
    } // namespace AnimationParameterSet
} // namespace app::classes::types
