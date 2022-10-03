#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberInteractionShaderManager {
        namespace {
            app::UberInteractionShaderManager__Class* type_info_ref = nullptr;
        }
        app::UberInteractionShaderManager__Class** type_info = &type_info_ref;
        inline app::UberInteractionShaderManager__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionShaderManager__Class>(type_info, "", "UberInteractionShaderManager");
        }
        inline app::UberInteractionShaderManager* create() {
            return il2cpp::create_object<app::UberInteractionShaderManager>(get_class());
        }
    } // namespace UberInteractionShaderManager
} // namespace app::classes::types
