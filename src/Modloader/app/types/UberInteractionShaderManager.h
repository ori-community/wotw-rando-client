#pragma once
#include <Modloader/app/structs/UberInteractionShaderManager.h>
#include <Modloader/app/structs/UberInteractionShaderManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionShaderManager {
        inline app::UberInteractionShaderManager__Class** type_info() {
            static app::UberInteractionShaderManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberInteractionShaderManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberInteractionShaderManager__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionShaderManager__Class>(type_info(), "", "UberInteractionShaderManager");
        }
        inline app::UberInteractionShaderManager* create() {
            return il2cpp::create_object<app::UberInteractionShaderManager>(get_class());
        }
    } // namespace UberInteractionShaderManager
} // namespace app::classes::types
