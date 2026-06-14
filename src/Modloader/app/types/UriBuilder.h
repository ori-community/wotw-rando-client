#pragma once
#include <Modloader/app/structs/UriBuilder.h>
#include <Modloader/app/structs/UriBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UriBuilder {
        inline app::UriBuilder__Class** type_info() {
            static app::UriBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UriBuilder__Class**)(modloader::win::memory::resolve_rva(0x0475E208));
            }
            return cache;
        }
        inline app::UriBuilder__Class* get_class() {
            return il2cpp::get_class<app::UriBuilder__Class>(type_info(), "System", "UriBuilder");
        }
        inline app::UriBuilder* create() {
            return il2cpp::create_object<app::UriBuilder>(get_class());
        }
    } // namespace UriBuilder
} // namespace app::classes::types
