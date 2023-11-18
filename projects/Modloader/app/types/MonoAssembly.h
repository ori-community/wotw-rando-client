#pragma once
#include <Modloader/app/structs/MonoAssembly.h>
#include <Modloader/app/structs/MonoAssembly__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoAssembly {
        inline app::MonoAssembly__Class** type_info() {
            static app::MonoAssembly__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoAssembly__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoAssembly__Class* get_class() {
            return il2cpp::get_class<app::MonoAssembly__Class>(type_info(), "System.Reflection", "MonoAssembly");
        }
        inline app::MonoAssembly* create() {
            return il2cpp::create_object<app::MonoAssembly>(get_class());
        }
    } // namespace MonoAssembly
} // namespace app::classes::types
