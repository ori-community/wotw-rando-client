#pragma once
#include <Modloader/app/structs/SeinPickupProcessor_CollectableInfo.h>
#include <Modloader/app/structs/SeinPickupProcessor_CollectableInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPickupProcessor_CollectableInfo {
        inline app::SeinPickupProcessor_CollectableInfo__Class** type_info() {
            static app::SeinPickupProcessor_CollectableInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinPickupProcessor_CollectableInfo__Class**)(modloader::win::memory::resolve_rva(0x04709710));
            }
            return cache;
        }
        inline app::SeinPickupProcessor_CollectableInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinPickupProcessor_CollectableInfo__Class>(type_info(), "", "SeinPickupProcessor", "CollectableInfo");
        }
        inline app::SeinPickupProcessor_CollectableInfo* create() {
            return il2cpp::create_object<app::SeinPickupProcessor_CollectableInfo>(get_class());
        }
    } // namespace SeinPickupProcessor_CollectableInfo
} // namespace app::classes::types
