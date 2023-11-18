#pragma once
#include <Modloader/app/structs/VoidTaskResult.h>
#include <Modloader/app/structs/VoidTaskResult__Boxed.h>
#include <Modloader/app/structs/VoidTaskResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VoidTaskResult {
        inline app::VoidTaskResult__Class** type_info() {
            static app::VoidTaskResult__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VoidTaskResult__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VoidTaskResult__Class* get_class() {
            return il2cpp::get_class<app::VoidTaskResult__Class>(type_info(), "System.Threading.Tasks", "VoidTaskResult");
        }
        inline app::VoidTaskResult* create() {
            return il2cpp::create_object<app::VoidTaskResult>(get_class());
        }
        inline app::VoidTaskResult__Boxed* box(app::VoidTaskResult value) {
            return il2cpp::box_value<app::VoidTaskResult__Boxed>(get_class(), value);
        }
    } // namespace VoidTaskResult
} // namespace app::classes::types
