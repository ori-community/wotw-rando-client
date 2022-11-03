#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Group__Array {
        inline app::Group__Array__Class** type_info = (app::Group__Array__Class**)(modloader::win::memory::resolve_rva(0x047847A8));
        inline app::Group__Array__Class* get_class() {
            return il2cpp::get_class<app::Group__Array__Class>(type_info, "System.Text.RegularExpressions", "Group[]");
        }
        inline app::Group__Array* create() {
            return il2cpp::create_object<app::Group__Array>(get_class());
        }
    } // namespace Group__Array
} // namespace app::classes::types
