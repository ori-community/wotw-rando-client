#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatCageMetaData {
        namespace {
            inline app::FloatCageMetaData__Class* type_info_ref = nullptr;
        }
        inline app::FloatCageMetaData__Class** type_info = &type_info_ref;
        inline app::FloatCageMetaData__Class* get_class() {
            return il2cpp::get_class<app::FloatCageMetaData__Class>(type_info, "", "FloatCageMetaData");
        }
        inline app::FloatCageMetaData* create() {
            return il2cpp::create_object<app::FloatCageMetaData>(get_class());
        }
    } // namespace FloatCageMetaData
} // namespace app::classes::types
