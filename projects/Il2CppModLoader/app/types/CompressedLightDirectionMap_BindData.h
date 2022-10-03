#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompressedLightDirectionMap_BindData {
        namespace {
            app::CompressedLightDirectionMap_BindData__Class* type_info_ref = nullptr;
        }
        app::CompressedLightDirectionMap_BindData__Class** type_info = &type_info_ref;
        inline app::CompressedLightDirectionMap_BindData__Class* get_class() {
            return il2cpp::get_nested_class<app::CompressedLightDirectionMap_BindData__Class>(type_info, "UberShader", "CompressedLightDirectionMap", "BindData");
        }
        inline app::CompressedLightDirectionMap_BindData* create() {
            return il2cpp::create_object<app::CompressedLightDirectionMap_BindData>(get_class());
        }
    } // namespace CompressedLightDirectionMap_BindData
} // namespace app::classes::types
