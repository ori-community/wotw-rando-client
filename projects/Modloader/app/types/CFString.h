#pragma once
#include <Modloader/app/structs/CFString.h>
#include <Modloader/app/structs/CFString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CFString {
        inline app::CFString__Class** type_info() {
            static app::CFString__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CFString__Class**)(modloader::win::memory::resolve_rva(0x0474F6A8));
            }
            return cache;
        }
        inline app::CFString__Class* get_class() {
            return il2cpp::get_class<app::CFString__Class>(type_info(), "Mono.Net", "CFString");
        }
        inline app::CFString* create() {
            return il2cpp::create_object<app::CFString>(get_class());
        }
    } // namespace CFString
} // namespace app::classes::types
