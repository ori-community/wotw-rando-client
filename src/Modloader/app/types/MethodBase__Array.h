#pragma once
#include <Modloader/app/structs/MethodBase__Array.h>
#include <Modloader/app/structs/MethodBase__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodBase__Array {
        inline app::MethodBase__Array__Class** type_info() {
            static app::MethodBase__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MethodBase__Array__Class**)(modloader::win::memory::resolve_rva(0x0470F668));
            }
            return cache;
        }
        inline app::MethodBase__Array__Class* get_class() {
            return il2cpp::get_class<app::MethodBase__Array__Class>(type_info(), "System.Reflection", "MethodBase[]");
        }
        inline app::MethodBase__Array* create() {
            return il2cpp::create_object<app::MethodBase__Array>(get_class());
        }
    } // namespace MethodBase__Array
} // namespace app::classes::types
