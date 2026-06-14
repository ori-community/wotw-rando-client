#pragma once
#include <Modloader/app/structs/UberShaderFindTypes.h>
#include <Modloader/app/structs/UberShaderFindTypes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderFindTypes {
        inline app::UberShaderFindTypes__Class** type_info() {
            static app::UberShaderFindTypes__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderFindTypes__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderFindTypes__Class* get_class() {
            return il2cpp::get_class<app::UberShaderFindTypes__Class>(type_info(), "", "UberShaderFindTypes");
        }
        inline app::UberShaderFindTypes* create() {
            return il2cpp::create_object<app::UberShaderFindTypes>(get_class());
        }
    } // namespace UberShaderFindTypes
} // namespace app::classes::types
