#pragma once
#include <Modloader/app/structs/ShaderFreezeTask.h>
#include <Modloader/app/structs/ShaderFreezeTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderFreezeTask {
        inline app::ShaderFreezeTask__Class** type_info() {
            static app::ShaderFreezeTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShaderFreezeTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShaderFreezeTask__Class* get_class() {
            return il2cpp::get_class<app::ShaderFreezeTask__Class>(type_info(), "Moon.ArtOptimization", "ShaderFreezeTask");
        }
        inline app::ShaderFreezeTask* create() {
            return il2cpp::create_object<app::ShaderFreezeTask>(get_class());
        }
    } // namespace ShaderFreezeTask
} // namespace app::classes::types
