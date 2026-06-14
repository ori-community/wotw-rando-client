#pragma once
#include <Modloader/app/structs/MonoMethod.h>
#include <Modloader/app/structs/MonoMethod__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoMethod {
        inline app::MonoMethod__Class** type_info() {
            static app::MonoMethod__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoMethod__Class**)(modloader::win::memory::resolve_rva(0x0470B5D0));
            }
            return cache;
        }
        inline app::MonoMethod__Class* get_class() {
            return il2cpp::get_class<app::MonoMethod__Class>(type_info(), "System.Reflection", "MonoMethod");
        }
        inline app::MonoMethod* create() {
            return il2cpp::create_object<app::MonoMethod>(get_class());
        }
    } // namespace MonoMethod
} // namespace app::classes::types
