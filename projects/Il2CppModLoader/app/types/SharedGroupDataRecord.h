#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SharedGroupDataRecord {
        namespace {
            app::SharedGroupDataRecord__Class* type_info_ref = nullptr;
        }
        app::SharedGroupDataRecord__Class** type_info = &type_info_ref;
        inline app::SharedGroupDataRecord__Class* get_class() {
            return il2cpp::get_class<app::SharedGroupDataRecord__Class>(type_info, "PlayFab.ClientModels", "SharedGroupDataRecord");
        }
        inline app::SharedGroupDataRecord* create() {
            return il2cpp::create_object<app::SharedGroupDataRecord>(get_class());
        }
        inline app::SharedGroupDataRecord__Array* create_array(int size) {
            return il2cpp::array_new<app::SharedGroupDataRecord__Array>(get_class(), size);
        }
    } // namespace SharedGroupDataRecord
} // namespace app::classes::types
