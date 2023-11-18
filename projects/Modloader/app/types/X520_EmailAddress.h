#pragma once
#include <Modloader/app/structs/X520_EmailAddress.h>
#include <Modloader/app/structs/X520_EmailAddress__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X520_EmailAddress {
        inline app::X520_EmailAddress__Class** type_info() {
            static app::X520_EmailAddress__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X520_EmailAddress__Class**)(modloader::win::memory::resolve_rva(0x04736328));
            }
            return cache;
        }
        inline app::X520_EmailAddress__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_EmailAddress__Class>(type_info(), "Mono.Security.X509", "X520", "EmailAddress");
        }
        inline app::X520_EmailAddress* create() {
            return il2cpp::create_object<app::X520_EmailAddress>(get_class());
        }
    } // namespace X520_EmailAddress
} // namespace app::classes::types
