#pragma once
#include <Modloader/app/structs/CheatsHandler_c.h>
#include <Modloader/app/structs/CheatsHandler_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CheatsHandler_c {
        inline app::CheatsHandler_c__Class** type_info() {
            static app::CheatsHandler_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CheatsHandler_c__Class**)(modloader::win::memory::resolve_rva(0x04737638));
            }
            return cache;
        }
        inline app::CheatsHandler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CheatsHandler_c__Class>(type_info(), "", "CheatsHandler", "<>c");
        }
        inline app::CheatsHandler_c* create() {
            return il2cpp::create_object<app::CheatsHandler_c>(get_class());
        }
    } // namespace CheatsHandler_c
} // namespace app::classes::types
