#pragma once
#include <Modloader/app/structs/DefaultContractResolver_c_DisplayClass42_0.h>
#include <Modloader/app/structs/DefaultContractResolver_c_DisplayClass42_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultContractResolver_c_DisplayClass42_0 {
        inline app::DefaultContractResolver_c_DisplayClass42_0__Class** type_info() {
            static app::DefaultContractResolver_c_DisplayClass42_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultContractResolver_c_DisplayClass42_0__Class**)(modloader::win::memory::resolve_rva(0x0472F558));
            }
            return cache;
        }
        inline app::DefaultContractResolver_c_DisplayClass42_0__Class* get_class() {
            return il2cpp::get_nested_class<app::DefaultContractResolver_c_DisplayClass42_0__Class>(type_info(), "Newtonsoft.Json.Serialization", "DefaultContractResolver", "<>c__DisplayClass42_0");
        }
        inline app::DefaultContractResolver_c_DisplayClass42_0* create() {
            return il2cpp::create_object<app::DefaultContractResolver_c_DisplayClass42_0>(get_class());
        }
    } // namespace DefaultContractResolver_c_DisplayClass42_0
} // namespace app::classes::types
