#pragma once
#include <Modloader/app/structs/IContractResolver.h>
#include <Modloader/app/structs/IContractResolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IContractResolver {
        inline app::IContractResolver__Class** type_info() {
            static app::IContractResolver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IContractResolver__Class**)(modloader::win::memory::resolve_rva(0x04725CA0));
            }
            return cache;
        }
        inline app::IContractResolver__Class* get_class() {
            return il2cpp::get_class<app::IContractResolver__Class>(type_info(), "Newtonsoft.Json.Serialization", "IContractResolver");
        }
    } // namespace IContractResolver
} // namespace app::classes::types
