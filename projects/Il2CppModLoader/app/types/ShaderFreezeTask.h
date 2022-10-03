#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderFreezeTask {
        namespace {
            app::ShaderFreezeTask__Class* type_info_ref = nullptr;
        }
        app::ShaderFreezeTask__Class** type_info = &type_info_ref;
        inline app::ShaderFreezeTask__Class* get_class() {
            return il2cpp::get_class<app::ShaderFreezeTask__Class>(type_info, "Moon.ArtOptimization", "ShaderFreezeTask");
        }
        inline app::ShaderFreezeTask* create() {
            return il2cpp::create_object<app::ShaderFreezeTask>(get_class());
        }
    } // namespace ShaderFreezeTask
} // namespace app::classes::types
