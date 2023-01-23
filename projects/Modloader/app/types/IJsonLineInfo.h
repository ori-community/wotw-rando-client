#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IJsonLineInfo__Class.h>

namespace app::classes::types {
    namespace IJsonLineInfo {
        inline app::IJsonLineInfo__Class** type_info = (app::IJsonLineInfo__Class**)(modloader::win::memory::resolve_rva(0x04778C98));
        inline app::IJsonLineInfo__Class* get_class() {
            return il2cpp::get_class<app::IJsonLineInfo__Class>(type_info, "Newtonsoft.Json", "IJsonLineInfo");
        }
    } // namespace IJsonLineInfo
} // namespace app::classes::types
