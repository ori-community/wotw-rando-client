#pragma once
#include <Modloader/app/structs/X520_OrganizationName.h>
#include <Modloader/app/structs/X520_OrganizationName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X520_OrganizationName {
        inline app::X520_OrganizationName__Class** type_info() {
            static app::X520_OrganizationName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X520_OrganizationName__Class**)(modloader::win::memory::resolve_rva(0x04757C10));
            }
            return cache;
        }
        inline app::X520_OrganizationName__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_OrganizationName__Class>(type_info(), "Mono.Security.X509", "X520", "OrganizationName");
        }
        inline app::X520_OrganizationName* create() {
            return il2cpp::create_object<app::X520_OrganizationName>(get_class());
        }
    } // namespace X520_OrganizationName
} // namespace app::classes::types
