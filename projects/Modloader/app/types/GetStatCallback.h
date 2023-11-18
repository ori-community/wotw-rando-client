#pragma once
#include <Modloader/app/structs/GetStatCallback.h>
#include <Modloader/app/structs/GetStatCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetStatCallback {
        inline app::GetStatCallback__Class** type_info() {
            static app::GetStatCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GetStatCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GetStatCallback__Class* get_class() {
            return il2cpp::get_class<app::GetStatCallback__Class>(type_info(), "", "GetStatCallback");
        }
        inline app::GetStatCallback* create() {
            return il2cpp::create_object<app::GetStatCallback>(get_class());
        }
    } // namespace GetStatCallback
} // namespace app::classes::types
