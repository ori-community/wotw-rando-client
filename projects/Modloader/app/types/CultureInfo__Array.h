#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CultureInfo__Array {
        inline app::CultureInfo__Array__Class** type_info = (app::CultureInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0474A750));
        inline app::CultureInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::CultureInfo__Array__Class>(type_info, "System.Globalization", "CultureInfo[]");
        }
        inline app::CultureInfo__Array* create() {
            return il2cpp::create_object<app::CultureInfo__Array>(get_class());
        }
    } // namespace CultureInfo__Array
} // namespace app::classes::types
