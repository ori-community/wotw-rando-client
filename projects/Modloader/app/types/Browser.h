#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Browser {
        inline app::Browser__Class** type_info = (app::Browser__Class**)(modloader::win::memory::resolve_rva(0x04731500));
        inline app::Browser__Class* get_class() {
            return il2cpp::get_class<app::Browser__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Browser");
        }
        inline app::Browser* create() {
            return il2cpp::create_object<app::Browser>(get_class());
        }
        inline app::Browser__Array* create_array(int size) {
            return il2cpp::array_new<app::Browser__Array>(get_class(), size);
        }
        inline app::Browser__Array* create_array(const std::vector<app::Browser*>& items) {
            return il2cpp::array_new<app::Browser__Array>(get_class(), items);
        }
    } // namespace Browser
} // namespace app::classes::types
