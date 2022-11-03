#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PropertyTabScope__Enum__Array {
        inline app::PropertyTabScope__Enum__Array__Class** type_info = (app::PropertyTabScope__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0472E170));
        inline app::PropertyTabScope__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::PropertyTabScope__Enum__Array__Class>(type_info, "System.ComponentModel", "PropertyTabScope[]");
        }
        inline app::PropertyTabScope__Enum__Array* create() {
            return il2cpp::create_object<app::PropertyTabScope__Enum__Array>(get_class());
        }
    } // namespace PropertyTabScope__Enum__Array
} // namespace app::classes::types
