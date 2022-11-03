#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderBuildUpdate {
        namespace {
            inline app::UberShaderBuildUpdate__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderBuildUpdate__Class** type_info = &type_info_ref;
        inline app::UberShaderBuildUpdate__Class* get_class() {
            return il2cpp::get_class<app::UberShaderBuildUpdate__Class>(type_info, "", "UberShaderBuildUpdate");
        }
        inline app::UberShaderBuildUpdate* create() {
            return il2cpp::create_object<app::UberShaderBuildUpdate>(get_class());
        }
    } // namespace UberShaderBuildUpdate
} // namespace app::classes::types
