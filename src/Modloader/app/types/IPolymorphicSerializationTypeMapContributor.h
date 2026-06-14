#pragma once
#include <Modloader/app/structs/IPolymorphicSerializationTypeMapContributor.h>
#include <Modloader/app/structs/IPolymorphicSerializationTypeMapContributor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPolymorphicSerializationTypeMapContributor {
        inline app::IPolymorphicSerializationTypeMapContributor__Class** type_info() {
            static app::IPolymorphicSerializationTypeMapContributor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPolymorphicSerializationTypeMapContributor__Class**)(modloader::win::memory::resolve_rva(0x047351C0));
            }
            return cache;
        }
        inline app::IPolymorphicSerializationTypeMapContributor__Class* get_class() {
            return il2cpp::get_class<app::IPolymorphicSerializationTypeMapContributor__Class>(type_info(), "", "IPolymorphicSerializationTypeMapContributor");
        }
    } // namespace IPolymorphicSerializationTypeMapContributor
} // namespace app::classes::types
