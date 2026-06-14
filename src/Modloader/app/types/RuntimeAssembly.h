#pragma once
#include <Modloader/app/structs/RuntimeAssembly.h>
#include <Modloader/app/structs/RuntimeAssembly__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeAssembly {
        inline app::RuntimeAssembly__Class** type_info() {
            static app::RuntimeAssembly__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeAssembly__Class**)(modloader::win::memory::resolve_rva(0x047261A8));
            }
            return cache;
        }
        inline app::RuntimeAssembly__Class* get_class() {
            return il2cpp::get_class<app::RuntimeAssembly__Class>(type_info(), "System.Reflection", "RuntimeAssembly");
        }
        inline app::RuntimeAssembly* create() {
            return il2cpp::create_object<app::RuntimeAssembly>(get_class());
        }
    } // namespace RuntimeAssembly
} // namespace app::classes::types
