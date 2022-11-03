#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GlobalPlaceholderCountData_Tally__Array {
        inline app::GlobalPlaceholderCountData_Tally__Array__Class** type_info = (app::GlobalPlaceholderCountData_Tally__Array__Class**)(modloader::win::memory::resolve_rva(0x04771228));
        inline app::GlobalPlaceholderCountData_Tally__Array__Class* get_class() {
            return il2cpp::get_class<app::GlobalPlaceholderCountData_Tally__Array__Class>(type_info, "", "GlobalPlaceholderCountData+Tally[]");
        }
        inline app::GlobalPlaceholderCountData_Tally__Array* create() {
            return il2cpp::create_object<app::GlobalPlaceholderCountData_Tally__Array>(get_class());
        }
    } // namespace GlobalPlaceholderCountData_Tally__Array
} // namespace app::classes::types
