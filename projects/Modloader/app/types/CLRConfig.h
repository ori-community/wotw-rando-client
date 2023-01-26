#pragma once
#include <Modloader/app/structs/CLRConfig.h>
#include <Modloader/app/structs/CLRConfig__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CLRConfig {
        inline app::CLRConfig__Class** type_info() {
            static app::CLRConfig__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CLRConfig__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CLRConfig__Class* get_class() {
            return il2cpp::get_class<app::CLRConfig__Class>(type_info(), "System", "CLRConfig");
        }
        inline app::CLRConfig* create() {
            return il2cpp::create_object<app::CLRConfig>(get_class());
        }
    } // namespace CLRConfig
} // namespace app::classes::types
