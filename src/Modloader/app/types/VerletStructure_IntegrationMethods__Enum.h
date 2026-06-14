#pragma once
#include <Modloader/app/structs/VerletStructure_IntegrationMethods__Enum.h>
#include <Modloader/app/structs/VerletStructure_IntegrationMethods__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_IntegrationMethods__Enum {
        inline app::VerletStructure_IntegrationMethods__Enum__Class** type_info() {
            static app::VerletStructure_IntegrationMethods__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletStructure_IntegrationMethods__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletStructure_IntegrationMethods__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_IntegrationMethods__Enum__Class>(type_info(), "", "VerletStructure", "IntegrationMethods");
        }
        inline app::VerletStructure_IntegrationMethods__Enum* create() {
            return il2cpp::create_object<app::VerletStructure_IntegrationMethods__Enum>(get_class());
        }
    } // namespace VerletStructure_IntegrationMethods__Enum
} // namespace app::classes::types
