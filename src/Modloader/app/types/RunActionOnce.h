#pragma once
#include <Modloader/app/structs/RunActionOnce.h>
#include <Modloader/app/structs/RunActionOnce__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RunActionOnce {
        inline app::RunActionOnce__Class** type_info() {
            static app::RunActionOnce__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RunActionOnce__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RunActionOnce__Class* get_class() {
            return il2cpp::get_class<app::RunActionOnce__Class>(type_info(), "", "RunActionOnce");
        }
        inline app::RunActionOnce* create() {
            return il2cpp::create_object<app::RunActionOnce>(get_class());
        }
    } // namespace RunActionOnce
} // namespace app::classes::types
