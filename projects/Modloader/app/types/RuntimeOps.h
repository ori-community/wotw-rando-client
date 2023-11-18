#pragma once
#include <Modloader/app/structs/RuntimeOps.h>
#include <Modloader/app/structs/RuntimeOps__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeOps {
        inline app::RuntimeOps__Class** type_info() {
            static app::RuntimeOps__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeOps__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeOps__Class* get_class() {
            return il2cpp::get_class<app::RuntimeOps__Class>(type_info(), "System.Runtime.CompilerServices", "RuntimeOps");
        }
        inline app::RuntimeOps* create() {
            return il2cpp::create_object<app::RuntimeOps>(get_class());
        }
    } // namespace RuntimeOps
} // namespace app::classes::types
