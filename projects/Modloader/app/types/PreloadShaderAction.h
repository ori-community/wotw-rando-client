#pragma once
#include <Modloader/app/structs/PreloadShaderAction.h>
#include <Modloader/app/structs/PreloadShaderAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreloadShaderAction {
        inline app::PreloadShaderAction__Class** type_info() {
            static app::PreloadShaderAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreloadShaderAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreloadShaderAction__Class* get_class() {
            return il2cpp::get_class<app::PreloadShaderAction__Class>(type_info(), "", "PreloadShaderAction");
        }
        inline app::PreloadShaderAction* create() {
            return il2cpp::create_object<app::PreloadShaderAction>(get_class());
        }
    } // namespace PreloadShaderAction
} // namespace app::classes::types
