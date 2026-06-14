#pragma once
#include <Modloader/app/structs/CompressedLightDirectionMap_BindData.h>
#include <Modloader/app/structs/CompressedLightDirectionMap_BindData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompressedLightDirectionMap_BindData {
        inline app::CompressedLightDirectionMap_BindData__Class** type_info() {
            static app::CompressedLightDirectionMap_BindData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompressedLightDirectionMap_BindData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompressedLightDirectionMap_BindData__Class* get_class() {
            return il2cpp::get_nested_class<app::CompressedLightDirectionMap_BindData__Class>(type_info(), "UberShader", "CompressedLightDirectionMap", "BindData");
        }
        inline app::CompressedLightDirectionMap_BindData* create() {
            return il2cpp::create_object<app::CompressedLightDirectionMap_BindData>(get_class());
        }
    } // namespace CompressedLightDirectionMap_BindData
} // namespace app::classes::types
