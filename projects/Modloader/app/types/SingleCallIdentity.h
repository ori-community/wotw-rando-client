#pragma once
#include <Modloader/app/structs/SingleCallIdentity.h>
#include <Modloader/app/structs/SingleCallIdentity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SingleCallIdentity {
        inline app::SingleCallIdentity__Class** type_info() {
            static app::SingleCallIdentity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SingleCallIdentity__Class**)(modloader::win::memory::resolve_rva(0x04735E30));
            }
            return cache;
        }
        inline app::SingleCallIdentity__Class* get_class() {
            return il2cpp::get_class<app::SingleCallIdentity__Class>(type_info(), "System.Runtime.Remoting", "SingleCallIdentity");
        }
        inline app::SingleCallIdentity* create() {
            return il2cpp::create_object<app::SingleCallIdentity>(get_class());
        }
    } // namespace SingleCallIdentity
} // namespace app::classes::types
