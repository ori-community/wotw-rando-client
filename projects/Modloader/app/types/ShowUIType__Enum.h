#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowUIType__Enum {
        inline app::ShowUIType__Enum__Class** type_info = (app::ShowUIType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04753F20));
        inline app::ShowUIType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ShowUIType__Enum__Class>(type_info, "", "ShowUIType");
        }
        inline app::ShowUIType__Enum* create() {
            return il2cpp::create_object<app::ShowUIType__Enum>(get_class());
        }
    } // namespace ShowUIType__Enum
} // namespace app::classes::types
