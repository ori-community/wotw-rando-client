#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FuncCondition__Array__Class.h>
#include <Modloader/app/structs/FuncCondition__Array.h>

namespace app::classes::types {
    namespace FuncCondition__Array {
        inline app::FuncCondition__Array__Class** type_info = (app::FuncCondition__Array__Class**)(modloader::win::memory::resolve_rva(0x0473CA10));
        inline app::FuncCondition__Array__Class* get_class() {
            return il2cpp::get_class<app::FuncCondition__Array__Class>(type_info, "Moon.InteractionGraph", "FuncCondition[]");
        }
        inline app::FuncCondition__Array* create() {
            return il2cpp::create_object<app::FuncCondition__Array>(get_class());
        }
    } // namespace FuncCondition__Array
} // namespace app::classes::types
