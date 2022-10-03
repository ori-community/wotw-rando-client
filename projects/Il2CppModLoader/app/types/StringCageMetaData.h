#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringCageMetaData {
        namespace {
            app::StringCageMetaData__Class* type_info_ref = nullptr;
        }
        app::StringCageMetaData__Class** type_info = &type_info_ref;
        inline app::StringCageMetaData__Class* get_class() {
            return il2cpp::get_class<app::StringCageMetaData__Class>(type_info, "", "StringCageMetaData");
        }
        inline app::StringCageMetaData* create() {
            return il2cpp::create_object<app::StringCageMetaData>(get_class());
        }
    } // namespace StringCageMetaData
} // namespace app::classes::types
