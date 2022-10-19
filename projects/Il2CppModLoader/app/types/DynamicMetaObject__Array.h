#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicMetaObject__Array {
        inline app::DynamicMetaObject__Array__Class** type_info = (app::DynamicMetaObject__Array__Class**)(modloader::win::memory::resolve_rva(0x047553A0));
        inline app::DynamicMetaObject__Array__Class* get_class() {
            return il2cpp::get_class<app::DynamicMetaObject__Array__Class>(type_info, "System.Dynamic", "DynamicMetaObject[]");
        }
        inline app::DynamicMetaObject__Array* create() {
            return il2cpp::create_object<app::DynamicMetaObject__Array>(get_class());
        }
    } // namespace DynamicMetaObject__Array
} // namespace app::classes::types
