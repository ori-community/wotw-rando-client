#pragma once
#include <Modloader/app/structs/String__Array__Array.h>
#include <Modloader/app/structs/String__Array__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace String__Array__Array {
        inline app::String__Array__Array__Class** type_info() {
            static app::String__Array__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::String__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04703578));
            }
            return cache;
        }
        inline app::String__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::String__Array__Array__Class>(type_info(), "System", "String[][]");
        }
        inline app::String__Array__Array* create() {
            return il2cpp::create_object<app::String__Array__Array>(get_class());
        }
    } // namespace String__Array__Array
} // namespace app::classes::types
