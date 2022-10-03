#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadPoolingPrewarmInstancesOperation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadPoolingPrewarmInstancesOperation__Class** type_info;
        inline app::LoadPoolingPrewarmInstancesOperation__Class* get_class() {
            return il2cpp::get_class<app::LoadPoolingPrewarmInstancesOperation__Class>(type_info, "frameworks.loading.Prewarmers", "LoadPoolingPrewarmInstancesOperation");
        }
        inline app::LoadPoolingPrewarmInstancesOperation* create() {
            return il2cpp::create_object<app::LoadPoolingPrewarmInstancesOperation>(get_class());
        }
    } // namespace LoadPoolingPrewarmInstancesOperation
} // namespace app::classes::types
