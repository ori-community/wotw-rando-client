#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultContractResolver_c {
        inline app::DefaultContractResolver_c__Class** type_info = (app::DefaultContractResolver_c__Class**)(modloader::win::memory::resolve_rva(0x04733F20));
        inline app::DefaultContractResolver_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DefaultContractResolver_c__Class>(type_info, "Newtonsoft.Json.Serialization", "DefaultContractResolver", "<>c");
        }
        inline app::DefaultContractResolver_c* create() {
            return il2cpp::create_object<app::DefaultContractResolver_c>(get_class());
        }
    } // namespace DefaultContractResolver_c
} // namespace app::classes::types
