#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Guid__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Guid__Array__Class** type_info;
        inline app::Guid__Array__Class* get_class() {
            return il2cpp::get_class<app::Guid__Array__Class>(type_info, "System", "Guid[]");
        }
        inline app::Guid__Array* create() {
            return il2cpp::create_object<app::Guid__Array>(get_class());
        }
    } // namespace Guid__Array
} // namespace app::classes::types
