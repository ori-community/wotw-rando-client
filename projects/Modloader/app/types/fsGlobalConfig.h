#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsGlobalConfig__Class.h>
#include <Modloader/app/structs/fsGlobalConfig.h>

namespace app::classes::types {
    namespace fsGlobalConfig {
        inline app::fsGlobalConfig__Class** type_info = (app::fsGlobalConfig__Class**)(modloader::win::memory::resolve_rva(0x04754ED8));
        inline app::fsGlobalConfig__Class* get_class() {
            return il2cpp::get_class<app::fsGlobalConfig__Class>(type_info, "FullSerializer", "fsGlobalConfig");
        }
        inline app::fsGlobalConfig* create() {
            return il2cpp::create_object<app::fsGlobalConfig>(get_class());
        }
    } // namespace fsGlobalConfig
} // namespace app::classes::types
