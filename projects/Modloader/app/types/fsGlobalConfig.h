#pragma once
#include <Modloader/app/structs/fsGlobalConfig.h>
#include <Modloader/app/structs/fsGlobalConfig__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsGlobalConfig {
        inline app::fsGlobalConfig__Class** type_info() {
            static app::fsGlobalConfig__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsGlobalConfig__Class**)(modloader::win::memory::resolve_rva(0x04754ED8));
            }
            return cache;
        }
        inline app::fsGlobalConfig__Class* get_class() {
            return il2cpp::get_class<app::fsGlobalConfig__Class>(type_info(), "FullSerializer", "fsGlobalConfig");
        }
        inline app::fsGlobalConfig* create() {
            return il2cpp::create_object<app::fsGlobalConfig>(get_class());
        }
    } // namespace fsGlobalConfig
} // namespace app::classes::types
