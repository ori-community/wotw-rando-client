#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GradientColorKey__Array {
        inline app::GradientColorKey__Array__Class** type_info = (app::GradientColorKey__Array__Class**)(modloader::win::memory::resolve_rva(0x047543C0));
        inline app::GradientColorKey__Array__Class* get_class() {
            return il2cpp::get_class<app::GradientColorKey__Array__Class>(type_info, "UnityEngine", "GradientColorKey[]");
        }
        inline app::GradientColorKey__Array* create() {
            return il2cpp::create_object<app::GradientColorKey__Array>(get_class());
        }
    } // namespace GradientColorKey__Array
} // namespace app::classes::types
