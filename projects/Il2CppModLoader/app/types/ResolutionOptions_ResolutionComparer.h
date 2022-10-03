#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResolutionOptions_ResolutionComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ResolutionOptions_ResolutionComparer__Class** type_info;
        inline app::ResolutionOptions_ResolutionComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::ResolutionOptions_ResolutionComparer__Class>(type_info, "", "ResolutionOptions", "ResolutionComparer");
        }
        inline app::ResolutionOptions_ResolutionComparer* create() {
            return il2cpp::create_object<app::ResolutionOptions_ResolutionComparer>(get_class());
        }
    } // namespace ResolutionOptions_ResolutionComparer
} // namespace app::classes::types
