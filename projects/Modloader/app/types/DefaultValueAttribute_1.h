#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultValueAttribute_1 {
        inline app::DefaultValueAttribute_1__Class** type_info = (app::DefaultValueAttribute_1__Class**)(modloader::win::memory::resolve_rva(0x04754558));
        inline app::DefaultValueAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::DefaultValueAttribute_1__Class>(type_info, "UnityEngine.Internal", "DefaultValueAttribute");
        }
        inline app::DefaultValueAttribute_1* create() {
            return il2cpp::create_object<app::DefaultValueAttribute_1>(get_class());
        }
    } // namespace DefaultValueAttribute_1
} // namespace app::classes::types
