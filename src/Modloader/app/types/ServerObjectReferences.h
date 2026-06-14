#pragma once
#include <Modloader/app/structs/ServerObjectReferences.h>
#include <Modloader/app/structs/ServerObjectReferences__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerObjectReferences {
        inline app::ServerObjectReferences__Class** type_info() {
            static app::ServerObjectReferences__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerObjectReferences__Class**)(modloader::win::memory::resolve_rva(0x0475B930));
            }
            return cache;
        }
        inline app::ServerObjectReferences__Class* get_class() {
            return il2cpp::get_class<app::ServerObjectReferences__Class>(type_info(), "", "ServerObjectReferences");
        }
        inline app::ServerObjectReferences* create() {
            return il2cpp::create_object<app::ServerObjectReferences>(get_class());
        }
    } // namespace ServerObjectReferences
} // namespace app::classes::types
