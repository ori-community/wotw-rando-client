#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderTextureBase__Class.h>
#include <Modloader/app/structs/UberShaderTextureBase.h>

namespace app::classes::types {
    namespace UberShaderTextureBase {
        inline app::UberShaderTextureBase__Class** type_info = (app::UberShaderTextureBase__Class**)(modloader::win::memory::resolve_rva(0x04746600));
        inline app::UberShaderTextureBase__Class* get_class() {
            return il2cpp::get_class<app::UberShaderTextureBase__Class>(type_info, "", "UberShaderTextureBase");
        }
        inline app::UberShaderTextureBase* create() {
            return il2cpp::create_object<app::UberShaderTextureBase>(get_class());
        }
    } // namespace UberShaderTextureBase
} // namespace app::classes::types
