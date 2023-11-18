#pragma once
#include <Modloader/app/structs/Int16__Array.h>
#include <Modloader/app/structs/Int16__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int16__Array {
        inline app::Int16__Array__Class** type_info() {
            static app::Int16__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Int16__Array__Class**)(modloader::win::memory::resolve_rva(0x04767BB0));
            }
            return cache;
        }
        inline app::Int16__Array__Class* get_class() {
            return il2cpp::get_class<app::Int16__Array__Class>(type_info(), "System", "Int16[]");
        }
        inline app::Int16__Array* create() {
            return il2cpp::create_object<app::Int16__Array>(get_class());
        }
    } // namespace Int16__Array
} // namespace app::classes::types
