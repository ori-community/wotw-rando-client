#pragma once
#include <Modloader/app/structs/SaveSlotBackup__Array.h>
#include <Modloader/app/structs/SaveSlotBackup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSlotBackup__Array {
        inline app::SaveSlotBackup__Array__Class** type_info() {
            static app::SaveSlotBackup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SaveSlotBackup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SaveSlotBackup__Array__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotBackup__Array__Class>(type_info(), "", "SaveSlotBackup[]");
        }
        inline app::SaveSlotBackup__Array* create() {
            return il2cpp::create_object<app::SaveSlotBackup__Array>(get_class());
        }
    } // namespace SaveSlotBackup__Array
} // namespace app::classes::types
