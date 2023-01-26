#pragma once
#include <Modloader/app/structs/ShaderModeType__Enum.h>
#include <Modloader/app/structs/ShaderModeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderModeType__Enum {
        inline app::ShaderModeType__Enum__Class** type_info() {
            static app::ShaderModeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShaderModeType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShaderModeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ShaderModeType__Enum__Class>(type_info(), "", "ShaderModeType");
        }
        inline app::ShaderModeType__Enum* create() {
            return il2cpp::create_object<app::ShaderModeType__Enum>(get_class());
        }
    } // namespace ShaderModeType__Enum
} // namespace app::classes::types
