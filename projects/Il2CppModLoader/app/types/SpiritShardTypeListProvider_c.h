#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardTypeListProvider_c {
        inline app::SpiritShardTypeListProvider_c__Class** type_info = (app::SpiritShardTypeListProvider_c__Class**)(modloader::win::memory::resolve_rva(0x0478EEB0));
        inline app::SpiritShardTypeListProvider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardTypeListProvider_c__Class>(type_info, "", "SpiritShardTypeListProvider", "<>c");
        }
        inline app::SpiritShardTypeListProvider_c* create() {
            return il2cpp::create_object<app::SpiritShardTypeListProvider_c>(get_class());
        }
    } // namespace SpiritShardTypeListProvider_c
} // namespace app::classes::types
