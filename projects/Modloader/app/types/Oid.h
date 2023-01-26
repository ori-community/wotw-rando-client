#pragma once
#include <Modloader/app/structs/Oid.h>
#include <Modloader/app/structs/Oid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Oid {
        inline app::Oid__Class** type_info() {
            static app::Oid__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Oid__Class**)(modloader::win::memory::resolve_rva(0x04792188));
            }
            return cache;
        }
        inline app::Oid__Class* get_class() {
            return il2cpp::get_class<app::Oid__Class>(type_info(), "System.Security.Cryptography", "Oid");
        }
        inline app::Oid* create() {
            return il2cpp::create_object<app::Oid>(get_class());
        }
    } // namespace Oid
} // namespace app::classes::types
