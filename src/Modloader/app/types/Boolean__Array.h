#pragma once
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/Boolean__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Boolean__Array {
        inline app::Boolean__Array__Class** type_info() {
            static app::Boolean__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Boolean__Array__Class**)(modloader::win::memory::resolve_rva(0x04717AB0));
            }
            return cache;
        }
        inline app::Boolean__Array__Class* get_class() {
            return il2cpp::get_class<app::Boolean__Array__Class>(type_info(), "System", "Boolean[]");
        }
        inline app::Boolean__Array* create() {
            return il2cpp::create_object<app::Boolean__Array>(get_class());
        }
    } // namespace Boolean__Array
} // namespace app::classes::types
