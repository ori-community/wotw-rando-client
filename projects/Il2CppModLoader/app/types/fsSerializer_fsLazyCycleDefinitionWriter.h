#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsSerializer_fsLazyCycleDefinitionWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsSerializer_fsLazyCycleDefinitionWriter__Class** type_info;
        inline app::fsSerializer_fsLazyCycleDefinitionWriter__Class* get_class() {
            return il2cpp::get_nested_class<app::fsSerializer_fsLazyCycleDefinitionWriter__Class>(type_info, "FullSerializer", "fsSerializer", "fsLazyCycleDefinitionWriter");
        }
        inline app::fsSerializer_fsLazyCycleDefinitionWriter* create() {
            return il2cpp::create_object<app::fsSerializer_fsLazyCycleDefinitionWriter>(get_class());
        }
    } // namespace fsSerializer_fsLazyCycleDefinitionWriter
} // namespace app::classes::types
