#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderRuntimeRenderOrder__Class.h>
#include <Modloader/app/structs/UberShaderRuntimeRenderOrder.h>

namespace app::classes::types {
    namespace UberShaderRuntimeRenderOrder {
        inline app::UberShaderRuntimeRenderOrder__Class** type_info = (app::UberShaderRuntimeRenderOrder__Class**)(modloader::win::memory::resolve_rva(0x047783C8));
        inline app::UberShaderRuntimeRenderOrder__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRuntimeRenderOrder__Class>(type_info, "", "UberShaderRuntimeRenderOrder");
        }
        inline app::UberShaderRuntimeRenderOrder* create() {
            return il2cpp::create_object<app::UberShaderRuntimeRenderOrder>(get_class());
        }
    } // namespace UberShaderRuntimeRenderOrder
} // namespace app::classes::types
