#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPolymorphicSerializationTypeMapContributor {
        inline app::IPolymorphicSerializationTypeMapContributor__Class** type_info = (app::IPolymorphicSerializationTypeMapContributor__Class**)(modloader::win::memory::resolve_rva(0x047351C0));
        inline app::IPolymorphicSerializationTypeMapContributor__Class* get_class() {
            return il2cpp::get_class<app::IPolymorphicSerializationTypeMapContributor__Class>(type_info, "", "IPolymorphicSerializationTypeMapContributor");
        }
    } // namespace IPolymorphicSerializationTypeMapContributor
} // namespace app::classes::types
