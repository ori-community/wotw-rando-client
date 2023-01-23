#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Regex__Array__Class.h>
#include <Modloader/app/structs/Regex__Array.h>

namespace app::classes::types {
    namespace Regex__Array {
        inline app::Regex__Array__Class** type_info = (app::Regex__Array__Class**)(modloader::win::memory::resolve_rva(0x0475B170));
        inline app::Regex__Array__Class* get_class() {
            return il2cpp::get_class<app::Regex__Array__Class>(type_info, "System.Text.RegularExpressions", "Regex[]");
        }
        inline app::Regex__Array* create() {
            return il2cpp::create_object<app::Regex__Array>(get_class());
        }
    } // namespace Regex__Array
} // namespace app::classes::types
