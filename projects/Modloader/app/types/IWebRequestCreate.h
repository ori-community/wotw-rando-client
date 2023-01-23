#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IWebRequestCreate__Class.h>

namespace app::classes::types {
    namespace IWebRequestCreate {
        inline app::IWebRequestCreate__Class** type_info = (app::IWebRequestCreate__Class**)(modloader::win::memory::resolve_rva(0x0473AC28));
        inline app::IWebRequestCreate__Class* get_class() {
            return il2cpp::get_class<app::IWebRequestCreate__Class>(type_info, "System.Net", "IWebRequestCreate");
        }
    } // namespace IWebRequestCreate
} // namespace app::classes::types
