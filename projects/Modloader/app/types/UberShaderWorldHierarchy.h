#pragma once
#include <Modloader/app/structs/UberShaderWorldHierarchy.h>
#include <Modloader/app/structs/UberShaderWorldHierarchy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderWorldHierarchy {
        inline app::UberShaderWorldHierarchy__Class** type_info() {
            static app::UberShaderWorldHierarchy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderWorldHierarchy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderWorldHierarchy__Class* get_class() {
            return il2cpp::get_class<app::UberShaderWorldHierarchy__Class>(type_info(), "", "UberShaderWorldHierarchy");
        }
        inline app::UberShaderWorldHierarchy* create() {
            return il2cpp::create_object<app::UberShaderWorldHierarchy>(get_class());
        }
    } // namespace UberShaderWorldHierarchy
} // namespace app::classes::types
