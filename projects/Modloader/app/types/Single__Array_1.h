#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Single__Array_1 {
        inline app::Single__Array_1__Class** type_info = (app::Single__Array_1__Class**)(modloader::win::memory::resolve_rva(0x04764680));
        inline app::Single__Array_1__Class* get_class() {
            return il2cpp::get_class<app::Single__Array_1__Class>(type_info, "System", "Single[,]");
        }
        inline app::Single__Array_1* create() {
            return il2cpp::create_object<app::Single__Array_1>(get_class());
        }
    } // namespace Single__Array_1
} // namespace app::classes::types
