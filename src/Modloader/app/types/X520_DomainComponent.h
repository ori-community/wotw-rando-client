#pragma once
#include <Modloader/app/structs/X520_DomainComponent.h>
#include <Modloader/app/structs/X520_DomainComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X520_DomainComponent {
        inline app::X520_DomainComponent__Class** type_info() {
            static app::X520_DomainComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X520_DomainComponent__Class**)(modloader::win::memory::resolve_rva(0x04787A00));
            }
            return cache;
        }
        inline app::X520_DomainComponent__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_DomainComponent__Class>(type_info(), "Mono.Security.X509", "X520", "DomainComponent");
        }
        inline app::X520_DomainComponent* create() {
            return il2cpp::create_object<app::X520_DomainComponent>(get_class());
        }
    } // namespace X520_DomainComponent
} // namespace app::classes::types
