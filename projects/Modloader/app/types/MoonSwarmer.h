#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonSwarmer {
        inline app::MoonSwarmer__Class** type_info = (app::MoonSwarmer__Class**)(modloader::win::memory::resolve_rva(0x04732B68));
        inline app::MoonSwarmer__Class* get_class() {
            return il2cpp::get_class<app::MoonSwarmer__Class>(type_info, "", "MoonSwarmer");
        }
        inline app::MoonSwarmer* create() {
            return il2cpp::create_object<app::MoonSwarmer>(get_class());
        }
        inline app::MoonSwarmer__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonSwarmer__Array>(get_class(), size);
        }
        inline app::MoonSwarmer__Array* create_array(const std::vector<app::MoonSwarmer*>& items) {
            return il2cpp::array_new<app::MoonSwarmer__Array>(get_class(), items);
        }
    } // namespace MoonSwarmer
} // namespace app::classes::types
