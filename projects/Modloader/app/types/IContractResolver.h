#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IContractResolver {
        inline app::IContractResolver__Class** type_info = (app::IContractResolver__Class**)(modloader::win::memory::resolve_rva(0x04725CA0));
        inline app::IContractResolver__Class* get_class() {
            return il2cpp::get_class<app::IContractResolver__Class>(type_info, "Newtonsoft.Json.Serialization", "IContractResolver");
        }
    } // namespace IContractResolver
} // namespace app::classes::types
