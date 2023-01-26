#pragma once
#include <Modloader/app/structs/fsAotCompilationManager.h>
#include <Modloader/app/structs/fsAotCompilationManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsAotCompilationManager {
        inline app::fsAotCompilationManager__Class** type_info() {
            static app::fsAotCompilationManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsAotCompilationManager__Class**)(modloader::win::memory::resolve_rva(0x047175B8));
            }
            return cache;
        }
        inline app::fsAotCompilationManager__Class* get_class() {
            return il2cpp::get_class<app::fsAotCompilationManager__Class>(type_info(), "FullSerializer", "fsAotCompilationManager");
        }
        inline app::fsAotCompilationManager* create() {
            return il2cpp::create_object<app::fsAotCompilationManager>(get_class());
        }
    } // namespace fsAotCompilationManager
} // namespace app::classes::types
