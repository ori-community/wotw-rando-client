#pragma once
#include <Modloader/app/structs/CustomShaderBlock.h>
#include <Modloader/app/structs/CustomShaderBlock__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomShaderBlock {
        inline app::CustomShaderBlock__Class** type_info() {
            static app::CustomShaderBlock__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CustomShaderBlock__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CustomShaderBlock__Class* get_class() {
            return il2cpp::get_class<app::CustomShaderBlock__Class>(type_info(), "", "CustomShaderBlock");
        }
        inline app::CustomShaderBlock* create() {
            return il2cpp::create_object<app::CustomShaderBlock>(get_class());
        }
    } // namespace CustomShaderBlock
} // namespace app::classes::types
