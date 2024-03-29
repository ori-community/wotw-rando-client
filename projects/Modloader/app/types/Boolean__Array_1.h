#pragma once
#include <Modloader/app/structs/Boolean__Array_1.h>
#include <Modloader/app/structs/Boolean__Array_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Boolean__Array_1 {
        inline app::Boolean__Array_1__Class** type_info() {
            static app::Boolean__Array_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Boolean__Array_1__Class**)(modloader::win::memory::resolve_rva(0x04799488));
            }
            return cache;
        }
        inline app::Boolean__Array_1__Class* get_class() {
            return il2cpp::get_class<app::Boolean__Array_1__Class>(type_info(), "System", "Boolean[,]");
        }
        inline app::Boolean__Array_1* create() {
            return il2cpp::create_object<app::Boolean__Array_1>(get_class());
        }
    } // namespace Boolean__Array_1
} // namespace app::classes::types
