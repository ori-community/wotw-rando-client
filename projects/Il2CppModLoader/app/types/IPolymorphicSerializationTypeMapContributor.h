#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPolymorphicSerializationTypeMapContributor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPolymorphicSerializationTypeMapContributor__Class** type_info;
        inline app::IPolymorphicSerializationTypeMapContributor__Class* get_class() {
            return il2cpp::get_class<app::IPolymorphicSerializationTypeMapContributor__Class>(type_info, "", "IPolymorphicSerializationTypeMapContributor");
        }
        inline app::IPolymorphicSerializationTypeMapContributor* create() {
            return il2cpp::create_object<app::IPolymorphicSerializationTypeMapContributor>(get_class());
        }
    } // namespace IPolymorphicSerializationTypeMapContributor
} // namespace app::classes::types
