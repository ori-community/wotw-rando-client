#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Vector3__Array_1 {
        inline app::Vector3__Array_1__Class** type_info = (app::Vector3__Array_1__Class**)(modloader::win::memory::resolve_rva(0x0474C390));
        inline app::Vector3__Array_1__Class* get_class() {
            return il2cpp::get_class<app::Vector3__Array_1__Class>(type_info, "UnityEngine", "Vector3[,]");
        }
        inline app::Vector3__Array_1* create() {
            return il2cpp::create_object<app::Vector3__Array_1>(get_class());
        }
    } // namespace Vector3__Array_1
} // namespace app::classes::types
