#pragma once
#include <Modloader/app/structs/MethodInfo_1__Array.h>
#include <Modloader/app/structs/MethodInfo_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodInfo_1__Array {
        inline app::MethodInfo_1__Array__Class** type_info() {
            static app::MethodInfo_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MethodInfo_1__Array__Class**)(modloader::win::memory::resolve_rva(0x0472A668));
            }
            return cache;
        }
        inline app::MethodInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::MethodInfo_1__Array__Class>(type_info(), "System.Reflection", "MethodInfo[]");
        }
        inline app::MethodInfo_1__Array* create() {
            return il2cpp::create_object<app::MethodInfo_1__Array>(get_class());
        }
    } // namespace MethodInfo_1__Array
} // namespace app::classes::types
