#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/INestedSite__Class.h>

namespace app::classes::types {
    namespace INestedSite {
        inline app::INestedSite__Class** type_info = (app::INestedSite__Class**)(modloader::win::memory::resolve_rva(0x0478B4C8));
        inline app::INestedSite__Class* get_class() {
            return il2cpp::get_class<app::INestedSite__Class>(type_info, "System.ComponentModel", "INestedSite");
        }
    } // namespace INestedSite
} // namespace app::classes::types
