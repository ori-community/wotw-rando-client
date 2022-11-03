#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IndexField__Array {
        inline app::IndexField__Array__Class** type_info = (app::IndexField__Array__Class**)(modloader::win::memory::resolve_rva(0x0471DB58));
        inline app::IndexField__Array__Class* get_class() {
            return il2cpp::get_class<app::IndexField__Array__Class>(type_info, "System.Data", "IndexField[]");
        }
        inline app::IndexField__Array* create() {
            return il2cpp::create_object<app::IndexField__Array>(get_class());
        }
    } // namespace IndexField__Array
} // namespace app::classes::types
