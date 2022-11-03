#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimation__Array {
        inline app::MoonAnimation__Array__Class** type_info = (app::MoonAnimation__Array__Class**)(modloader::win::memory::resolve_rva(0x0472E150));
        inline app::MoonAnimation__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimation__Array__Class>(type_info, "Moon", "MoonAnimation[]");
        }
        inline app::MoonAnimation__Array* create() {
            return il2cpp::create_object<app::MoonAnimation__Array>(get_class());
        }
    } // namespace MoonAnimation__Array
} // namespace app::classes::types
