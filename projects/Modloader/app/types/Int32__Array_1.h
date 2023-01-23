#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Int32__Array_1__Class.h>
#include <Modloader/app/structs/Int32__Array_1.h>

namespace app::classes::types {
    namespace Int32__Array_1 {
        inline app::Int32__Array_1__Class** type_info = (app::Int32__Array_1__Class**)(modloader::win::memory::resolve_rva(0x0476D9D8));
        inline app::Int32__Array_1__Class* get_class() {
            return il2cpp::get_class<app::Int32__Array_1__Class>(type_info, "System", "Int32[,,]");
        }
        inline app::Int32__Array_1* create() {
            return il2cpp::create_object<app::Int32__Array_1>(get_class());
        }
    } // namespace Int32__Array_1
} // namespace app::classes::types
