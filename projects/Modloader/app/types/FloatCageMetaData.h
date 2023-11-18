#pragma once
#include <Modloader/app/structs/FloatCageMetaData.h>
#include <Modloader/app/structs/FloatCageMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatCageMetaData {
        inline app::FloatCageMetaData__Class** type_info() {
            static app::FloatCageMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatCageMetaData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatCageMetaData__Class* get_class() {
            return il2cpp::get_class<app::FloatCageMetaData__Class>(type_info(), "", "FloatCageMetaData");
        }
        inline app::FloatCageMetaData* create() {
            return il2cpp::create_object<app::FloatCageMetaData>(get_class());
        }
    } // namespace FloatCageMetaData
} // namespace app::classes::types
