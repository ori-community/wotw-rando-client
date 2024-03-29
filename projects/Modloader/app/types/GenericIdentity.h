#pragma once
#include <Modloader/app/structs/GenericIdentity.h>
#include <Modloader/app/structs/GenericIdentity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericIdentity {
        inline app::GenericIdentity__Class** type_info() {
            static app::GenericIdentity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GenericIdentity__Class**)(modloader::win::memory::resolve_rva(0x0476DA70));
            }
            return cache;
        }
        inline app::GenericIdentity__Class* get_class() {
            return il2cpp::get_class<app::GenericIdentity__Class>(type_info(), "System.Security.Principal", "GenericIdentity");
        }
        inline app::GenericIdentity* create() {
            return il2cpp::create_object<app::GenericIdentity>(get_class());
        }
    } // namespace GenericIdentity
} // namespace app::classes::types
