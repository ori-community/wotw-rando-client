#pragma once
#include <Modloader/app/structs/LookAt.h>
#include <Modloader/app/structs/LookAt__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LookAt {
        inline app::LookAt__Class** type_info() {
            static app::LookAt__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LookAt__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LookAt__Class* get_class() {
            return il2cpp::get_class<app::LookAt__Class>(type_info(), "", "LookAt");
        }
        inline app::LookAt* create() {
            return il2cpp::create_object<app::LookAt>(get_class());
        }
    } // namespace LookAt
} // namespace app::classes::types
