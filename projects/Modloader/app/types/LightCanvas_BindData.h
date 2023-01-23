#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LightCanvas_BindData__Class.h>
#include <Modloader/app/structs/LightCanvas_BindData.h>

namespace app::classes::types {
    namespace LightCanvas_BindData {
        inline app::LightCanvas_BindData__Class** type_info = (app::LightCanvas_BindData__Class**)(modloader::win::memory::resolve_rva(0x04719768));
        inline app::LightCanvas_BindData__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvas_BindData__Class>(type_info, "", "LightCanvas", "BindData");
        }
        inline app::LightCanvas_BindData* create() {
            return il2cpp::create_object<app::LightCanvas_BindData>(get_class());
        }
    } // namespace LightCanvas_BindData
} // namespace app::classes::types
