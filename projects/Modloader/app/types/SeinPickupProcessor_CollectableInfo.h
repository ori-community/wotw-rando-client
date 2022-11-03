#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinPickupProcessor_CollectableInfo {
        inline app::SeinPickupProcessor_CollectableInfo__Class** type_info = (app::SeinPickupProcessor_CollectableInfo__Class**)(modloader::win::memory::resolve_rva(0x04709710));
        inline app::SeinPickupProcessor_CollectableInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinPickupProcessor_CollectableInfo__Class>(type_info, "", "SeinPickupProcessor", "CollectableInfo");
        }
        inline app::SeinPickupProcessor_CollectableInfo* create() {
            return il2cpp::create_object<app::SeinPickupProcessor_CollectableInfo>(get_class());
        }
    } // namespace SeinPickupProcessor_CollectableInfo
} // namespace app::classes::types
