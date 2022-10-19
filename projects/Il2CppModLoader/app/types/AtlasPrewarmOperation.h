#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AtlasPrewarmOperation {
        inline app::AtlasPrewarmOperation__Class** type_info = (app::AtlasPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x04754ED0));
        inline app::AtlasPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::AtlasPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "AtlasPrewarmOperation");
        }
        inline app::AtlasPrewarmOperation* create() {
            return il2cpp::create_object<app::AtlasPrewarmOperation>(get_class());
        }
    } // namespace AtlasPrewarmOperation
} // namespace app::classes::types
