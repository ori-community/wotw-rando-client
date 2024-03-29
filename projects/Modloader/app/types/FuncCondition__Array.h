#pragma once
#include <Modloader/app/structs/FuncCondition__Array.h>
#include <Modloader/app/structs/FuncCondition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FuncCondition__Array {
        inline app::FuncCondition__Array__Class** type_info() {
            static app::FuncCondition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FuncCondition__Array__Class**)(modloader::win::memory::resolve_rva(0x0473CA10));
            }
            return cache;
        }
        inline app::FuncCondition__Array__Class* get_class() {
            return il2cpp::get_class<app::FuncCondition__Array__Class>(type_info(), "Moon.InteractionGraph", "FuncCondition[]");
        }
        inline app::FuncCondition__Array* create() {
            return il2cpp::create_object<app::FuncCondition__Array>(get_class());
        }
    } // namespace FuncCondition__Array
} // namespace app::classes::types
