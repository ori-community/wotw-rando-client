#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderPrewarmOperation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderPrewarmOperation__Class** type_info;
        inline app::ShaderPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::ShaderPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "ShaderPrewarmOperation");
        }
        inline app::ShaderPrewarmOperation* create() {
            return il2cpp::create_object<app::ShaderPrewarmOperation>(get_class());
        }
    } // namespace ShaderPrewarmOperation
} // namespace app::classes::types
