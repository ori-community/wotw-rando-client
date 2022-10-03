#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X520_DomainComponent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X520_DomainComponent__Class** type_info;
        inline app::X520_DomainComponent__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_DomainComponent__Class>(type_info, "Mono.Security.X509", "X520", "DomainComponent");
        }
        inline app::X520_DomainComponent* create() {
            return il2cpp::create_object<app::X520_DomainComponent>(get_class());
        }
    } // namespace X520_DomainComponent
} // namespace app::classes::types
