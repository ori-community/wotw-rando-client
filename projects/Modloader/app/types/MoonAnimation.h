#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonAnimation__Class.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimation__Array.h>

namespace app::classes::types {
    namespace MoonAnimation {
        inline app::MoonAnimation__Class** type_info = (app::MoonAnimation__Class**)(modloader::win::memory::resolve_rva(0x04772048));
        inline app::MoonAnimation__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimation__Class>(type_info, "Moon", "MoonAnimation");
        }
        inline app::MoonAnimation* create() {
            return il2cpp::create_object<app::MoonAnimation>(get_class());
        }
        inline app::MoonAnimation__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimation__Array>(get_class(), size);
        }
        inline app::MoonAnimation__Array* create_array(const std::vector<app::MoonAnimation*>& items) {
            return il2cpp::array_new<app::MoonAnimation__Array>(get_class(), items);
        }
    } // namespace MoonAnimation
} // namespace app::classes::types
