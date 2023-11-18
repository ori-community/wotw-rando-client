#pragma once
#include <Modloader/app/structs/MonoModule.h>
#include <Modloader/app/structs/MonoModule__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoModule {
        inline app::MonoModule__Class** type_info() {
            static app::MonoModule__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoModule__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoModule__Class* get_class() {
            return il2cpp::get_class<app::MonoModule__Class>(type_info(), "System.Reflection", "MonoModule");
        }
        inline app::MonoModule* create() {
            return il2cpp::create_object<app::MonoModule>(get_class());
        }
    } // namespace MonoModule
} // namespace app::classes::types
