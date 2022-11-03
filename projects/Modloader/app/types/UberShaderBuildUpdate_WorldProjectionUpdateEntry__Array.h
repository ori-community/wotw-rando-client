#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array {
        namespace {
            inline app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array__Class>(type_info, "", "UberShaderBuildUpdate+WorldProjectionUpdateEntry[]");
        }
        inline app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array* create() {
            return il2cpp::create_object<app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array>(get_class());
        }
    } // namespace UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array
} // namespace app::classes::types
