#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResolutionOptions {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ResolutionOptions__Class** type_info;
        inline app::ResolutionOptions__Class* get_class() {
            return il2cpp::get_class<app::ResolutionOptions__Class>(type_info, "", "ResolutionOptions");
        }
        inline app::ResolutionOptions* create() {
            return il2cpp::create_object<app::ResolutionOptions>(get_class());
        }
    } // namespace ResolutionOptions
} // namespace app::classes::types
