#pragma once
#include <Modloader/app/structs/FuncCondition_1__Array.h>
#include <Modloader/app/structs/FuncCondition_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FuncCondition_1__Array {
        inline app::FuncCondition_1__Array__Class** type_info() {
            static app::FuncCondition_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FuncCondition_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04719E68));
            }
            return cache;
        }
        inline app::FuncCondition_1__Array__Class* get_class() {
            return il2cpp::get_class<app::FuncCondition_1__Array__Class>(type_info(), "fsm", "FuncCondition[]");
        }
        inline app::FuncCondition_1__Array* create() {
            return il2cpp::create_object<app::FuncCondition_1__Array>(get_class());
        }
    } // namespace FuncCondition_1__Array
} // namespace app::classes::types
