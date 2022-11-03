#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Vector4__Array {
        inline app::Vector4__Array__Class** type_info = (app::Vector4__Array__Class**)(modloader::win::memory::resolve_rva(0x047163D8));
        inline app::Vector4__Array__Class* get_class() {
            return il2cpp::get_class<app::Vector4__Array__Class>(type_info, "UnityEngine", "Vector4[]");
        }
        inline app::Vector4__Array* create() {
            return il2cpp::create_object<app::Vector4__Array>(get_class());
        }
    } // namespace Vector4__Array
} // namespace app::classes::types
