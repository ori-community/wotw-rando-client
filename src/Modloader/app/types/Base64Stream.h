#pragma once
#include <Modloader/app/structs/Base64Stream.h>
#include <Modloader/app/structs/Base64Stream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Base64Stream {
        inline app::Base64Stream__Class** type_info() {
            static app::Base64Stream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Base64Stream__Class**)(modloader::win::memory::resolve_rva(0x04777EE0));
            }
            return cache;
        }
        inline app::Base64Stream__Class* get_class() {
            return il2cpp::get_class<app::Base64Stream__Class>(type_info(), "System.Net", "Base64Stream");
        }
        inline app::Base64Stream* create() {
            return il2cpp::create_object<app::Base64Stream>(get_class());
        }
    } // namespace Base64Stream
} // namespace app::classes::types
