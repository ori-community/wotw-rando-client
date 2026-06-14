#pragma once
#include <Modloader/app/structs/DefaultContractResolver.h>
#include <Modloader/app/structs/DefaultContractResolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultContractResolver {
        inline app::DefaultContractResolver__Class** type_info() {
            static app::DefaultContractResolver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultContractResolver__Class**)(modloader::win::memory::resolve_rva(0x0477D598));
            }
            return cache;
        }
        inline app::DefaultContractResolver__Class* get_class() {
            return il2cpp::get_class<app::DefaultContractResolver__Class>(type_info(), "Newtonsoft.Json.Serialization", "DefaultContractResolver");
        }
        inline app::DefaultContractResolver* create() {
            return il2cpp::create_object<app::DefaultContractResolver>(get_class());
        }
    } // namespace DefaultContractResolver
} // namespace app::classes::types
