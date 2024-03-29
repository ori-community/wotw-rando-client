#pragma once
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/Browser__Array.h>
#include <Modloader/app/structs/Browser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Browser {
        inline app::Browser__Class** type_info() {
            static app::Browser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Browser__Class**)(modloader::win::memory::resolve_rva(0x04731500));
            }
            return cache;
        }
        inline app::Browser__Class* get_class() {
            return il2cpp::get_class<app::Browser__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "Browser");
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
