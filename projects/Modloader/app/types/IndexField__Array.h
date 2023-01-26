#pragma once
#include <Modloader/app/structs/IndexField__Array.h>
#include <Modloader/app/structs/IndexField__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IndexField__Array {
        inline app::IndexField__Array__Class** type_info() {
            static app::IndexField__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IndexField__Array__Class**)(modloader::win::memory::resolve_rva(0x0471DB58));
            }
            return cache;
        }
        inline app::IndexField__Array__Class* get_class() {
            return il2cpp::get_class<app::IndexField__Array__Class>(type_info(), "System.Data", "IndexField[]");
        }
        inline app::IndexField__Array* create() {
            return il2cpp::create_object<app::IndexField__Array>(get_class());
        }
    } // namespace IndexField__Array
} // namespace app::classes::types
