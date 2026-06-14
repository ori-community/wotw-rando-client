#pragma once
#include <Modloader/app/structs/UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array.h>
#include <Modloader/app/structs/UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array {
        inline app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array__Class** type_info() {
            static app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array__Class>(type_info(), "", "UberShaderBuildUpdate+WorldProjectionUpdateEntry[]");
        }
        inline app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array* create() {
            return il2cpp::create_object<app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array>(get_class());
        }
    } // namespace UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array
} // namespace app::classes::types
