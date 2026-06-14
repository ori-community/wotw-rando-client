#pragma once
#include <Modloader/app/structs/UserDataRecord.h>
#include <Modloader/app/structs/UserDataRecord__Array.h>
#include <Modloader/app/structs/UserDataRecord__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserDataRecord {
        inline app::UserDataRecord__Class** type_info() {
            static app::UserDataRecord__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserDataRecord__Class**)(modloader::win::memory::resolve_rva(0x0475B4B0));
            }
            return cache;
        }
        inline app::UserDataRecord__Class* get_class() {
            return il2cpp::get_class<app::UserDataRecord__Class>(type_info(), "PlayFab.ClientModels", "UserDataRecord");
        }
        inline app::UserDataRecord* create() {
            return il2cpp::create_object<app::UserDataRecord>(get_class());
        }
        inline app::UserDataRecord__Array* create_array(int size) {
            return il2cpp::array_new<app::UserDataRecord__Array>(get_class(), size);
        }
        inline app::UserDataRecord__Array* create_array(const std::vector<app::UserDataRecord*>& items) {
            return il2cpp::array_new<app::UserDataRecord__Array>(get_class(), items);
        }
    } // namespace UserDataRecord
} // namespace app::classes::types
