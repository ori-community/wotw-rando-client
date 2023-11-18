#pragma once
#include <Modloader/app/structs/Function_1__Array.h>
#include <Modloader/app/structs/Function_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Function_1__Array {
        inline app::Function_1__Array__Class** type_info() {
            static app::Function_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Function_1__Array__Class**)(modloader::win::memory::resolve_rva(0x047301E0));
            }
            return cache;
        }
        inline app::Function_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Function_1__Array__Class>(type_info(), "System.Data", "Function[]");
        }
        inline app::Function_1__Array* create() {
            return il2cpp::create_object<app::Function_1__Array>(get_class());
        }
    } // namespace Function_1__Array
} // namespace app::classes::types
