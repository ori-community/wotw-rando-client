#pragma once
#include <Modloader/app/structs/PropertyInfo_1__Array.h>
#include <Modloader/app/structs/PropertyInfo_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyInfo_1__Array {
        inline app::PropertyInfo_1__Array__Class** type_info() {
            static app::PropertyInfo_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PropertyInfo_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04721520));
            }
            return cache;
        }
        inline app::PropertyInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::PropertyInfo_1__Array__Class>(type_info(), "System.Reflection", "PropertyInfo[]");
        }
        inline app::PropertyInfo_1__Array* create() {
            return il2cpp::create_object<app::PropertyInfo_1__Array>(get_class());
        }
    } // namespace PropertyInfo_1__Array
} // namespace app::classes::types
