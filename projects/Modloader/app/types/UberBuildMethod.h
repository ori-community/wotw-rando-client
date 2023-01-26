#pragma once
#include <Modloader/app/structs/UberBuildMethod.h>
#include <Modloader/app/structs/UberBuildMethod__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberBuildMethod {
        inline app::UberBuildMethod__Class** type_info() {
            static app::UberBuildMethod__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberBuildMethod__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberBuildMethod__Class* get_class() {
            return il2cpp::get_class<app::UberBuildMethod__Class>(type_info(), "", "UberBuildMethod");
        }
        inline app::UberBuildMethod* create() {
            return il2cpp::create_object<app::UberBuildMethod>(get_class());
        }
    } // namespace UberBuildMethod
} // namespace app::classes::types
