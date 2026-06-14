#pragma once
#include <Modloader/app/structs/DefaultContractResolver_c.h>
#include <Modloader/app/structs/DefaultContractResolver_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultContractResolver_c {
        inline app::DefaultContractResolver_c__Class** type_info() {
            static app::DefaultContractResolver_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultContractResolver_c__Class**)(modloader::win::memory::resolve_rva(0x04733F20));
            }
            return cache;
        }
        inline app::DefaultContractResolver_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DefaultContractResolver_c__Class>(type_info(), "Newtonsoft.Json.Serialization", "DefaultContractResolver", "<>c");
        }
        inline app::DefaultContractResolver_c* create() {
            return il2cpp::create_object<app::DefaultContractResolver_c>(get_class());
        }
    } // namespace DefaultContractResolver_c
} // namespace app::classes::types
