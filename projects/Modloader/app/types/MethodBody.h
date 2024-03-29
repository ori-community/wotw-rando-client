#pragma once
#include <Modloader/app/structs/MethodBody.h>
#include <Modloader/app/structs/MethodBody__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodBody {
        inline app::MethodBody__Class** type_info() {
            static app::MethodBody__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MethodBody__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MethodBody__Class* get_class() {
            return il2cpp::get_class<app::MethodBody__Class>(type_info(), "System.Reflection", "MethodBody");
        }
        inline app::MethodBody* create() {
            return il2cpp::create_object<app::MethodBody>(get_class());
        }
    } // namespace MethodBody
} // namespace app::classes::types
