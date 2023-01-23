#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CFString__Class.h>
#include <Modloader/app/structs/CFString.h>

namespace app::classes::types {
    namespace CFString {
        inline app::CFString__Class** type_info = (app::CFString__Class**)(modloader::win::memory::resolve_rva(0x0474F6A8));
        inline app::CFString__Class* get_class() {
            return il2cpp::get_class<app::CFString__Class>(type_info, "Mono.Net", "CFString");
        }
        inline app::CFString* create() {
            return il2cpp::create_object<app::CFString>(get_class());
        }
    } // namespace CFString
} // namespace app::classes::types
