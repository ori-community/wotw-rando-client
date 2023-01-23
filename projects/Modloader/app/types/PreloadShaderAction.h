#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PreloadShaderAction__Class.h>
#include <Modloader/app/structs/PreloadShaderAction.h>

namespace app::classes::types {
    namespace PreloadShaderAction {
        namespace {
            inline app::PreloadShaderAction__Class* type_info_ref = nullptr;
        }
        inline app::PreloadShaderAction__Class** type_info = &type_info_ref;
        inline app::PreloadShaderAction__Class* get_class() {
            return il2cpp::get_class<app::PreloadShaderAction__Class>(type_info, "", "PreloadShaderAction");
        }
        inline app::PreloadShaderAction* create() {
            return il2cpp::create_object<app::PreloadShaderAction>(get_class());
        }
    } // namespace PreloadShaderAction
} // namespace app::classes::types
