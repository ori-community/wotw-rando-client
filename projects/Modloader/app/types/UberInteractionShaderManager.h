#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberInteractionShaderManager__Class.h>
#include <Modloader/app/structs/UberInteractionShaderManager.h>

namespace app::classes::types {
    namespace UberInteractionShaderManager {
        namespace {
            inline app::UberInteractionShaderManager__Class* type_info_ref = nullptr;
        }
        inline app::UberInteractionShaderManager__Class** type_info = &type_info_ref;
        inline app::UberInteractionShaderManager__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionShaderManager__Class>(type_info, "", "UberInteractionShaderManager");
        }
        inline app::UberInteractionShaderManager* create() {
            return il2cpp::create_object<app::UberInteractionShaderManager>(get_class());
        }
    } // namespace UberInteractionShaderManager
} // namespace app::classes::types
