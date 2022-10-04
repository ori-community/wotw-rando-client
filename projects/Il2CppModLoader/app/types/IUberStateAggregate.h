#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUberStateAggregate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUberStateAggregate__Class** type_info;
        inline app::IUberStateAggregate__Class* get_class() {
            return il2cpp::get_class<app::IUberStateAggregate__Class>(type_info, "Moon", "IUberStateAggregate");
        }
    } // namespace IUberStateAggregate
} // namespace app::classes::types
