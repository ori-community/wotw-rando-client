#pragma once
#include <Modloader/app/structs/GlobalPlaceholderCountData_Tally__Array.h>
#include <Modloader/app/structs/GlobalPlaceholderCountData_Tally__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlobalPlaceholderCountData_Tally__Array {
        inline app::GlobalPlaceholderCountData_Tally__Array__Class** type_info() {
            static app::GlobalPlaceholderCountData_Tally__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GlobalPlaceholderCountData_Tally__Array__Class**)(modloader::win::memory::resolve_rva(0x04771228));
            }
            return cache;
        }
        inline app::GlobalPlaceholderCountData_Tally__Array__Class* get_class() {
            return il2cpp::get_class<app::GlobalPlaceholderCountData_Tally__Array__Class>(type_info(), "", "GlobalPlaceholderCountData+Tally[]");
        }
        inline app::GlobalPlaceholderCountData_Tally__Array* create() {
            return il2cpp::create_object<app::GlobalPlaceholderCountData_Tally__Array>(get_class());
        }
    } // namespace GlobalPlaceholderCountData_Tally__Array
} // namespace app::classes::types
