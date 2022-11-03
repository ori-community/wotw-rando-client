#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderModeType__Enum {
        namespace {
            inline app::ShaderModeType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ShaderModeType__Enum__Class** type_info = &type_info_ref;
        inline app::ShaderModeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ShaderModeType__Enum__Class>(type_info, "", "ShaderModeType");
        }
        inline app::ShaderModeType__Enum* create() {
            return il2cpp::create_object<app::ShaderModeType__Enum>(get_class());
        }
    } // namespace ShaderModeType__Enum
} // namespace app::classes::types
