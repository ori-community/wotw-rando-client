#pragma once
#include <Modloader/app/structs/AsyncOperation_1.h>
#include <Modloader/app/structs/AsyncOperation_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncOperation_1 {
        inline app::AsyncOperation_1__Class** type_info() {
            static app::AsyncOperation_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsyncOperation_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsyncOperation_1__Class* get_class() {
            return il2cpp::get_class<app::AsyncOperation_1__Class>(type_info(), "UnityEngine", "AsyncOperation");
        }
        inline app::AsyncOperation_1* create() {
            return il2cpp::create_object<app::AsyncOperation_1>(get_class());
        }
    } // namespace AsyncOperation_1
} // namespace app::classes::types
