#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReadOnlyException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReadOnlyException__Class** type_info;
        inline app::ReadOnlyException__Class* get_class() {
            return il2cpp::get_class<app::ReadOnlyException__Class>(type_info, "System.Data", "ReadOnlyException");
        }
        inline app::ReadOnlyException* create() {
            return il2cpp::create_object<app::ReadOnlyException>(get_class());
        }
    } // namespace ReadOnlyException
} // namespace app::classes::types
