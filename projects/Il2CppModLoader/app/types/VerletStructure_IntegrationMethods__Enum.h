#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletStructure_IntegrationMethods__Enum {
        namespace {
            inline app::VerletStructure_IntegrationMethods__Enum__Class* type_info_ref = nullptr;
        }
        inline app::VerletStructure_IntegrationMethods__Enum__Class** type_info = &type_info_ref;
        inline app::VerletStructure_IntegrationMethods__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_IntegrationMethods__Enum__Class>(type_info, "", "VerletStructure", "IntegrationMethods");
        }
        inline app::VerletStructure_IntegrationMethods__Enum* create() {
            return il2cpp::create_object<app::VerletStructure_IntegrationMethods__Enum>(get_class());
        }
    } // namespace VerletStructure_IntegrationMethods__Enum
} // namespace app::classes::types
