#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsSerializer_fsLazyCycleDefinitionWriter {
        inline app::fsSerializer_fsLazyCycleDefinitionWriter__Class** type_info = (app::fsSerializer_fsLazyCycleDefinitionWriter__Class**)(modloader::win::memory::resolve_rva(0x04786070));
        inline app::fsSerializer_fsLazyCycleDefinitionWriter__Class* get_class() {
            return il2cpp::get_nested_class<app::fsSerializer_fsLazyCycleDefinitionWriter__Class>(type_info, "FullSerializer", "fsSerializer", "fsLazyCycleDefinitionWriter");
        }
        inline app::fsSerializer_fsLazyCycleDefinitionWriter* create() {
            return il2cpp::create_object<app::fsSerializer_fsLazyCycleDefinitionWriter>(get_class());
        }
    } // namespace fsSerializer_fsLazyCycleDefinitionWriter
} // namespace app::classes::types
