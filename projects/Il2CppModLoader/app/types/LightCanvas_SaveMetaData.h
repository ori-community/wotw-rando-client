#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightCanvas_SaveMetaData {
        namespace {
            inline app::LightCanvas_SaveMetaData__Class* type_info_ref = nullptr;
        }
        inline app::LightCanvas_SaveMetaData__Class** type_info = &type_info_ref;
        inline app::LightCanvas_SaveMetaData__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvas_SaveMetaData__Class>(type_info, "", "LightCanvas", "SaveMetaData");
        }
        inline app::LightCanvas_SaveMetaData* create() {
            return il2cpp::create_object<app::LightCanvas_SaveMetaData>(get_class());
        }
        inline app::LightCanvas_SaveMetaData__Boxed* box(app::LightCanvas_SaveMetaData value) {
            return il2cpp::box_value<app::LightCanvas_SaveMetaData__Boxed>(get_class(), value);
        }
    } // namespace LightCanvas_SaveMetaData
} // namespace app::classes::types
