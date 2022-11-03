#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResourcesLoadPrewarmOperation {
        inline app::ResourcesLoadPrewarmOperation__Class** type_info = (app::ResourcesLoadPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x047335E0));
        inline app::ResourcesLoadPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::ResourcesLoadPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "ResourcesLoadPrewarmOperation");
        }
        inline app::ResourcesLoadPrewarmOperation* create() {
            return il2cpp::create_object<app::ResourcesLoadPrewarmOperation>(get_class());
        }
    } // namespace ResourcesLoadPrewarmOperation
} // namespace app::classes::types
