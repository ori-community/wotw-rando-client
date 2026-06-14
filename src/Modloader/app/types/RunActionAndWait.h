#pragma once
#include <Modloader/app/structs/RunActionAndWait.h>
#include <Modloader/app/structs/RunActionAndWait__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RunActionAndWait {
        inline app::RunActionAndWait__Class** type_info() {
            static app::RunActionAndWait__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RunActionAndWait__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RunActionAndWait__Class* get_class() {
            return il2cpp::get_class<app::RunActionAndWait__Class>(type_info(), "", "RunActionAndWait");
        }
        inline app::RunActionAndWait* create() {
            return il2cpp::create_object<app::RunActionAndWait>(get_class());
        }
    } // namespace RunActionAndWait
} // namespace app::classes::types
