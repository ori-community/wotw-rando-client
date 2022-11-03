#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompressedLightDirectionMap_BindData {
        namespace {
            inline app::CompressedLightDirectionMap_BindData__Class* type_info_ref = nullptr;
        }
        inline app::CompressedLightDirectionMap_BindData__Class** type_info = &type_info_ref;
        inline app::CompressedLightDirectionMap_BindData__Class* get_class() {
            return il2cpp::get_nested_class<app::CompressedLightDirectionMap_BindData__Class>(type_info, "UberShader", "CompressedLightDirectionMap", "BindData");
        }
        inline app::CompressedLightDirectionMap_BindData* create() {
            return il2cpp::create_object<app::CompressedLightDirectionMap_BindData>(get_class());
        }
    } // namespace CompressedLightDirectionMap_BindData
} // namespace app::classes::types
