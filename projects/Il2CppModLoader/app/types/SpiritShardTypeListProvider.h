#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardTypeListProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritShardTypeListProvider__Class** type_info;
        inline app::SpiritShardTypeListProvider__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardTypeListProvider__Class>(type_info, "", "SpiritShardTypeListProvider");
        }
        inline app::SpiritShardTypeListProvider* create() {
            return il2cpp::create_object<app::SpiritShardTypeListProvider>(get_class());
        }
    } // namespace SpiritShardTypeListProvider
} // namespace app::classes::types
