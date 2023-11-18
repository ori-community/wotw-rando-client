#pragma once
#include <Modloader/app/structs/UberShaderPrewarmLoad.h>
#include <Modloader/app/structs/UberShaderPrewarmLoad__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderPrewarmLoad {
        inline app::UberShaderPrewarmLoad__Class** type_info() {
            static app::UberShaderPrewarmLoad__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderPrewarmLoad__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderPrewarmLoad__Class* get_class() {
            return il2cpp::get_class<app::UberShaderPrewarmLoad__Class>(type_info(), "", "UberShaderPrewarmLoad");
        }
        inline app::UberShaderPrewarmLoad* create() {
            return il2cpp::create_object<app::UberShaderPrewarmLoad>(get_class());
        }
    } // namespace UberShaderPrewarmLoad
} // namespace app::classes::types
