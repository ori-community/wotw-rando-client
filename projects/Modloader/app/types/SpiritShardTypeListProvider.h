#pragma once
#include <Modloader/app/structs/SpiritShardTypeListProvider.h>
#include <Modloader/app/structs/SpiritShardTypeListProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardTypeListProvider {
        inline app::SpiritShardTypeListProvider__Class** type_info() {
            static app::SpiritShardTypeListProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritShardTypeListProvider__Class**)(modloader::win::memory::resolve_rva(0x04789EE8));
            }
            return cache;
        }
        inline app::SpiritShardTypeListProvider__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardTypeListProvider__Class>(type_info(), "", "SpiritShardTypeListProvider");
        }
        inline app::SpiritShardTypeListProvider* create() {
            return il2cpp::create_object<app::SpiritShardTypeListProvider>(get_class());
        }
    } // namespace SpiritShardTypeListProvider
} // namespace app::classes::types
