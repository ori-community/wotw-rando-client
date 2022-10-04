#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDynamicMetaObjectProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDynamicMetaObjectProvider__Class** type_info;
        inline app::IDynamicMetaObjectProvider__Class* get_class() {
            return il2cpp::get_class<app::IDynamicMetaObjectProvider__Class>(type_info, "System.Dynamic", "IDynamicMetaObjectProvider");
        }
    } // namespace IDynamicMetaObjectProvider
} // namespace app::classes::types
