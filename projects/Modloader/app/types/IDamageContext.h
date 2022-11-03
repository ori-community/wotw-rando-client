#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDamageContext {
        inline app::IDamageContext__Class** type_info = (app::IDamageContext__Class**)(modloader::win::memory::resolve_rva(0x04721098));
        inline app::IDamageContext__Class* get_class() {
            return il2cpp::get_class<app::IDamageContext__Class>(type_info, "", "IDamageContext");
        }
    } // namespace IDamageContext
} // namespace app::classes::types
