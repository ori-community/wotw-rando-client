#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardTypeListProvider {
        inline app::SpiritShardTypeListProvider__Class** type_info = (app::SpiritShardTypeListProvider__Class**)(modloader::win::memory::resolve_rva(0x04789EE8));
        inline app::SpiritShardTypeListProvider__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardTypeListProvider__Class>(type_info, "", "SpiritShardTypeListProvider");
        }
        inline app::SpiritShardTypeListProvider* create() {
            return il2cpp::create_object<app::SpiritShardTypeListProvider>(get_class());
        }
    } // namespace SpiritShardTypeListProvider
} // namespace app::classes::types
