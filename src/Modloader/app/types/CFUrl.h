#pragma once
#include <Modloader/app/structs/CFUrl.h>
#include <Modloader/app/structs/CFUrl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CFUrl {
        inline app::CFUrl__Class** type_info() {
            static app::CFUrl__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CFUrl__Class**)(modloader::win::memory::resolve_rva(0x0474E620));
            }
            return cache;
        }
        inline app::CFUrl__Class* get_class() {
            return il2cpp::get_class<app::CFUrl__Class>(type_info(), "Mono.Net", "CFUrl");
        }
        inline app::CFUrl* create() {
            return il2cpp::create_object<app::CFUrl>(get_class());
        }
    } // namespace CFUrl
} // namespace app::classes::types
