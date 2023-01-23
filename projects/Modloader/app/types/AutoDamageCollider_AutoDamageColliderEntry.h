#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AutoDamageCollider_AutoDamageColliderEntry__Class.h>
#include <Modloader/app/structs/AutoDamageCollider_AutoDamageColliderEntry.h>
#include <Modloader/app/structs/AutoDamageCollider_AutoDamageColliderEntry__Array.h>

namespace app::classes::types {
    namespace AutoDamageCollider_AutoDamageColliderEntry {
        inline app::AutoDamageCollider_AutoDamageColliderEntry__Class** type_info = (app::AutoDamageCollider_AutoDamageColliderEntry__Class**)(modloader::win::memory::resolve_rva(0x04790E50));
        inline app::AutoDamageCollider_AutoDamageColliderEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::AutoDamageCollider_AutoDamageColliderEntry__Class>(type_info, "", "AutoDamageCollider", "AutoDamageColliderEntry");
        }
        inline app::AutoDamageCollider_AutoDamageColliderEntry* create() {
            return il2cpp::create_object<app::AutoDamageCollider_AutoDamageColliderEntry>(get_class());
        }
        inline app::AutoDamageCollider_AutoDamageColliderEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::AutoDamageCollider_AutoDamageColliderEntry__Array>(get_class(), size);
        }
        inline app::AutoDamageCollider_AutoDamageColliderEntry__Array* create_array(const std::vector<app::AutoDamageCollider_AutoDamageColliderEntry*>& items) {
            return il2cpp::array_new<app::AutoDamageCollider_AutoDamageColliderEntry__Array>(get_class(), items);
        }
    } // namespace AutoDamageCollider_AutoDamageColliderEntry
} // namespace app::classes::types
