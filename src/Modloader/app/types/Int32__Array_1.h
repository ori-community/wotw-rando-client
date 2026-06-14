#pragma once
#include <Modloader/app/structs/Int32__Array_1.h>
#include <Modloader/app/structs/Int32__Array_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int32__Array_1 {
        inline app::Int32__Array_1__Class** type_info() {
            static app::Int32__Array_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Int32__Array_1__Class**)(modloader::win::memory::resolve_rva(0x0476D9D8));
            }
            return cache;
        }
        inline app::Int32__Array_1__Class* get_class() {
            return il2cpp::get_class<app::Int32__Array_1__Class>(type_info(), "System", "Int32[,,]");
        }
        inline app::Int32__Array_1* create() {
            return il2cpp::create_object<app::Int32__Array_1>(get_class());
        }
    } // namespace Int32__Array_1
} // namespace app::classes::types
