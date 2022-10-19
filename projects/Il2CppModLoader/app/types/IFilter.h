#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IFilter {
        inline app::IFilter__Class** type_info = (app::IFilter__Class**)(modloader::win::memory::resolve_rva(0x04702F18));
        inline app::IFilter__Class* get_class() {
            return il2cpp::get_class<app::IFilter__Class>(type_info, "System.Data", "IFilter");
        }
    } // namespace IFilter
} // namespace app::classes::types
