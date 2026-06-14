#pragma once
#include <Modloader/app/structs/UberShaderBuildUpdate.h>
#include <Modloader/app/structs/UberShaderBuildUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderBuildUpdate {
        inline app::UberShaderBuildUpdate__Class** type_info() {
            static app::UberShaderBuildUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderBuildUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderBuildUpdate__Class* get_class() {
            return il2cpp::get_class<app::UberShaderBuildUpdate__Class>(type_info(), "", "UberShaderBuildUpdate");
        }
        inline app::UberShaderBuildUpdate* create() {
            return il2cpp::create_object<app::UberShaderBuildUpdate>(get_class());
        }
    } // namespace UberShaderBuildUpdate
} // namespace app::classes::types
