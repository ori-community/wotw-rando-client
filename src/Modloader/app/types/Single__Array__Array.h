#pragma once
#include <Modloader/app/structs/Single__Array__Array.h>
#include <Modloader/app/structs/Single__Array__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Single__Array__Array {
        inline app::Single__Array__Array__Class** type_info() {
            static app::Single__Array__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Single__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04797448));
            }
            return cache;
        }
        inline app::Single__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Single__Array__Array__Class>(type_info(), "System", "Single[][]");
        }
        inline app::Single__Array__Array* create() {
            return il2cpp::create_object<app::Single__Array__Array>(get_class());
        }
    } // namespace Single__Array__Array
} // namespace app::classes::types
