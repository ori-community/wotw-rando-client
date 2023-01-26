#pragma once
#include <Modloader/app/structs/MoonAnimation__Array.h>
#include <Modloader/app/structs/MoonAnimation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimation__Array {
        inline app::MoonAnimation__Array__Class** type_info() {
            static app::MoonAnimation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonAnimation__Array__Class**)(modloader::win::memory::resolve_rva(0x0472E150));
            }
            return cache;
        }
        inline app::MoonAnimation__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimation__Array__Class>(type_info(), "Moon", "MoonAnimation[]");
        }
        inline app::MoonAnimation__Array* create() {
            return il2cpp::create_object<app::MoonAnimation__Array>(get_class());
        }
    } // namespace MoonAnimation__Array
} // namespace app::classes::types
