#pragma once
#include <Modloader/app/structs/RuntimeModule.h>
#include <Modloader/app/structs/RuntimeModule__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeModule {
        inline app::RuntimeModule__Class** type_info() {
            static app::RuntimeModule__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeModule__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeModule__Class* get_class() {
            return il2cpp::get_class<app::RuntimeModule__Class>(type_info(), "System.Reflection", "RuntimeModule");
        }
        inline app::RuntimeModule* create() {
            return il2cpp::create_object<app::RuntimeModule>(get_class());
        }
    } // namespace RuntimeModule
} // namespace app::classes::types
