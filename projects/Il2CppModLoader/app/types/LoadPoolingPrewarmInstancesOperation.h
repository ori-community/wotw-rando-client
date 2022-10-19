#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoadPoolingPrewarmInstancesOperation {
        inline app::LoadPoolingPrewarmInstancesOperation__Class** type_info = (app::LoadPoolingPrewarmInstancesOperation__Class**)(modloader::win::memory::resolve_rva(0x04709708));
        inline app::LoadPoolingPrewarmInstancesOperation__Class* get_class() {
            return il2cpp::get_class<app::LoadPoolingPrewarmInstancesOperation__Class>(type_info, "frameworks.loading.Prewarmers", "LoadPoolingPrewarmInstancesOperation");
        }
        inline app::LoadPoolingPrewarmInstancesOperation* create() {
            return il2cpp::create_object<app::LoadPoolingPrewarmInstancesOperation>(get_class());
        }
    } // namespace LoadPoolingPrewarmInstancesOperation
} // namespace app::classes::types
