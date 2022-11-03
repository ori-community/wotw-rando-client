#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsAotCompilationManager {
        inline app::fsAotCompilationManager__Class** type_info = (app::fsAotCompilationManager__Class**)(modloader::win::memory::resolve_rva(0x047175B8));
        inline app::fsAotCompilationManager__Class* get_class() {
            return il2cpp::get_class<app::fsAotCompilationManager__Class>(type_info, "FullSerializer", "fsAotCompilationManager");
        }
        inline app::fsAotCompilationManager* create() {
            return il2cpp::create_object<app::fsAotCompilationManager>(get_class());
        }
    } // namespace fsAotCompilationManager
} // namespace app::classes::types
