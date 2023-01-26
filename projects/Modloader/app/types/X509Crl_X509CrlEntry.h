#pragma once
#include <Modloader/app/structs/X509Crl_X509CrlEntry.h>
#include <Modloader/app/structs/X509Crl_X509CrlEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509Crl_X509CrlEntry {
        inline app::X509Crl_X509CrlEntry__Class** type_info() {
            static app::X509Crl_X509CrlEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509Crl_X509CrlEntry__Class**)(modloader::win::memory::resolve_rva(0x04726518));
            }
            return cache;
        }
        inline app::X509Crl_X509CrlEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::X509Crl_X509CrlEntry__Class>(type_info(), "Mono.Security.X509", "X509Crl", "X509CrlEntry");
        }
        inline app::X509Crl_X509CrlEntry* create() {
            return il2cpp::create_object<app::X509Crl_X509CrlEntry>(get_class());
        }
    } // namespace X509Crl_X509CrlEntry
} // namespace app::classes::types
