#pragma once
#include <Modloader/app/structs/SharedGroupDataRecord.h>
#include <Modloader/app/structs/SharedGroupDataRecord__Array.h>
#include <Modloader/app/structs/SharedGroupDataRecord__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SharedGroupDataRecord {
        inline app::SharedGroupDataRecord__Class** type_info() {
            static app::SharedGroupDataRecord__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SharedGroupDataRecord__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SharedGroupDataRecord__Class* get_class() {
            return il2cpp::get_class<app::SharedGroupDataRecord__Class>(type_info(), "PlayFab.ClientModels", "SharedGroupDataRecord");
        }
        inline app::SharedGroupDataRecord* create() {
            return il2cpp::create_object<app::SharedGroupDataRecord>(get_class());
        }
        inline app::SharedGroupDataRecord__Array* create_array(int size) {
            return il2cpp::array_new<app::SharedGroupDataRecord__Array>(get_class(), size);
        }
        inline app::SharedGroupDataRecord__Array* create_array(const std::vector<app::SharedGroupDataRecord*>& items) {
            return il2cpp::array_new<app::SharedGroupDataRecord__Array>(get_class(), items);
        }
    } // namespace SharedGroupDataRecord
} // namespace app::classes::types
