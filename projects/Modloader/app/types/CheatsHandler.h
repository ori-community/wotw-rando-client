#pragma once
#include <Modloader/app/structs/CheatsHandler.h>
#include <Modloader/app/structs/CheatsHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CheatsHandler {
        inline app::CheatsHandler__Class** type_info() {
            static app::CheatsHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CheatsHandler__Class**)(modloader::win::memory::resolve_rva(0x0471ABA0));
            }
            return cache;
        }
        inline app::CheatsHandler__Class* get_class() {
            return il2cpp::get_class<app::CheatsHandler__Class>(type_info(), "", "CheatsHandler");
        }
        inline app::CheatsHandler* create() {
            return il2cpp::create_object<app::CheatsHandler>(get_class());
        }
    } // namespace CheatsHandler
} // namespace app::classes::types
