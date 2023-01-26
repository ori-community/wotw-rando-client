#pragma once
#include <Modloader/app/structs/UberShaderPrewarmerProgress.h>
#include <Modloader/app/structs/UberShaderPrewarmerProgress__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderPrewarmerProgress {
        inline app::UberShaderPrewarmerProgress__Class** type_info() {
            static app::UberShaderPrewarmerProgress__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderPrewarmerProgress__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderPrewarmerProgress__Class* get_class() {
            return il2cpp::get_class<app::UberShaderPrewarmerProgress__Class>(type_info(), "", "UberShaderPrewarmerProgress");
        }
        inline app::UberShaderPrewarmerProgress* create() {
            return il2cpp::create_object<app::UberShaderPrewarmerProgress>(get_class());
        }
    } // namespace UberShaderPrewarmerProgress
} // namespace app::classes::types
