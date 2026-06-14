#pragma once
#include <Modloader/app/structs/IDamageContext.h>
#include <Modloader/app/structs/IDamageContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDamageContext {
        inline app::IDamageContext__Class** type_info() {
            static app::IDamageContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDamageContext__Class**)(modloader::win::memory::resolve_rva(0x04721098));
            }
            return cache;
        }
        inline app::IDamageContext__Class* get_class() {
            return il2cpp::get_class<app::IDamageContext__Class>(type_info(), "", "IDamageContext");
        }
    } // namespace IDamageContext
} // namespace app::classes::types
