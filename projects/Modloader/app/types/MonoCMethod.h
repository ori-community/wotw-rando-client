#pragma once
#include <Modloader/app/structs/MonoCMethod.h>
#include <Modloader/app/structs/MonoCMethod__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoCMethod {
        inline app::MonoCMethod__Class** type_info() {
            static app::MonoCMethod__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoCMethod__Class**)(modloader::win::memory::resolve_rva(0x04771E20));
            }
            return cache;
        }
        inline app::MonoCMethod__Class* get_class() {
            return il2cpp::get_class<app::MonoCMethod__Class>(type_info(), "System.Reflection", "MonoCMethod");
        }
        inline app::MonoCMethod* create() {
            return il2cpp::create_object<app::MonoCMethod>(get_class());
        }
    } // namespace MonoCMethod
} // namespace app::classes::types
