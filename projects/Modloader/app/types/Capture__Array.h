#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Capture__Array {
        inline app::Capture__Array__Class** type_info = (app::Capture__Array__Class**)(modloader::win::memory::resolve_rva(0x0470BC20));
        inline app::Capture__Array__Class* get_class() {
            return il2cpp::get_class<app::Capture__Array__Class>(type_info, "System.Text.RegularExpressions", "Capture[]");
        }
        inline app::Capture__Array* create() {
            return il2cpp::create_object<app::Capture__Array>(get_class());
        }
    } // namespace Capture__Array
} // namespace app::classes::types
