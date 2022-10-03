#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicMetaObject__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicMetaObject__Array__Class** type_info;
        inline app::DynamicMetaObject__Array__Class* get_class() {
            return il2cpp::get_class<app::DynamicMetaObject__Array__Class>(type_info, "System.Dynamic", "DynamicMetaObject[]");
        }
        inline app::DynamicMetaObject__Array* create() {
            return il2cpp::create_object<app::DynamicMetaObject__Array>(get_class());
        }
    } // namespace DynamicMetaObject__Array
} // namespace app::classes::types
