#pragma once
#include <Modloader/app/structs/X520_Oid.h>
#include <Modloader/app/structs/X520_Oid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X520_Oid {
        inline app::X520_Oid__Class** type_info() {
            static app::X520_Oid__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X520_Oid__Class**)(modloader::win::memory::resolve_rva(0x04794DD0));
            }
            return cache;
        }
        inline app::X520_Oid__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_Oid__Class>(type_info(), "Mono.Security.X509", "X520", "Oid");
        }
        inline app::X520_Oid* create() {
            return il2cpp::create_object<app::X520_Oid>(get_class());
        }
    } // namespace X520_Oid
} // namespace app::classes::types
