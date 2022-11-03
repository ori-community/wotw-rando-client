#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CFUrl {
        inline app::CFUrl__Class** type_info = (app::CFUrl__Class**)(modloader::win::memory::resolve_rva(0x0474E620));
        inline app::CFUrl__Class* get_class() {
            return il2cpp::get_class<app::CFUrl__Class>(type_info, "Mono.Net", "CFUrl");
        }
        inline app::CFUrl* create() {
            return il2cpp::create_object<app::CFUrl>(get_class());
        }
    } // namespace CFUrl
} // namespace app::classes::types
