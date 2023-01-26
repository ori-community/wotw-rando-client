#pragma once
#include <Modloader/app/structs/X520_GivenName.h>
#include <Modloader/app/structs/X520_GivenName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X520_GivenName {
        inline app::X520_GivenName__Class** type_info() {
            static app::X520_GivenName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X520_GivenName__Class**)(modloader::win::memory::resolve_rva(0x047359E8));
            }
            return cache;
        }
        inline app::X520_GivenName__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_GivenName__Class>(type_info(), "Mono.Security.X509", "X520", "GivenName");
        }
        inline app::X520_GivenName* create() {
            return il2cpp::create_object<app::X520_GivenName>(get_class());
        }
    } // namespace X520_GivenName
} // namespace app::classes::types
