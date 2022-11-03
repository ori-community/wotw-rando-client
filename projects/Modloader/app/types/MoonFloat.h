#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonFloat {
        inline app::MoonFloat__Class** type_info = (app::MoonFloat__Class**)(modloader::win::memory::resolve_rva(0x04747408));
        inline app::MoonFloat__Class* get_class() {
            return il2cpp::get_class<app::MoonFloat__Class>(type_info, "Moon", "MoonFloat");
        }
        inline app::MoonFloat* create() {
            return il2cpp::create_object<app::MoonFloat>(get_class());
        }
        inline app::MoonFloat__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonFloat__Array>(get_class(), size);
        }
        inline app::MoonFloat__Array* create_array(const std::vector<app::MoonFloat*>& items) {
            return il2cpp::array_new<app::MoonFloat__Array>(get_class(), items);
        }
    } // namespace MoonFloat
} // namespace app::classes::types
