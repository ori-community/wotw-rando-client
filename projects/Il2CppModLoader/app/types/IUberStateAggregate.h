#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUberStateAggregate {
        inline app::IUberStateAggregate__Class** type_info = (app::IUberStateAggregate__Class**)(modloader::win::memory::resolve_rva(0x047823D0));
        inline app::IUberStateAggregate__Class* get_class() {
            return il2cpp::get_class<app::IUberStateAggregate__Class>(type_info, "Moon", "IUberStateAggregate");
        }
    } // namespace IUberStateAggregate
} // namespace app::classes::types
