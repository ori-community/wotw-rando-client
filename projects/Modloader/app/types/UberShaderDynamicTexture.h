#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderDynamicTexture__Class.h>
#include <Modloader/app/structs/UberShaderDynamicTexture.h>

namespace app::classes::types {
    namespace UberShaderDynamicTexture {
        namespace {
            inline app::UberShaderDynamicTexture__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderDynamicTexture__Class** type_info = &type_info_ref;
        inline app::UberShaderDynamicTexture__Class* get_class() {
            return il2cpp::get_class<app::UberShaderDynamicTexture__Class>(type_info, "", "UberShaderDynamicTexture");
        }
        inline app::UberShaderDynamicTexture* create() {
            return il2cpp::create_object<app::UberShaderDynamicTexture>(get_class());
        }
    } // namespace UberShaderDynamicTexture
} // namespace app::classes::types
