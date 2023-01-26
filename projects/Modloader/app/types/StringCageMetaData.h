#pragma once
#include <Modloader/app/structs/StringCageMetaData.h>
#include <Modloader/app/structs/StringCageMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringCageMetaData {
        inline app::StringCageMetaData__Class** type_info() {
            static app::StringCageMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StringCageMetaData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StringCageMetaData__Class* get_class() {
            return il2cpp::get_class<app::StringCageMetaData__Class>(type_info(), "", "StringCageMetaData");
        }
        inline app::StringCageMetaData* create() {
            return il2cpp::create_object<app::StringCageMetaData>(get_class());
        }
    } // namespace StringCageMetaData
} // namespace app::classes::types
