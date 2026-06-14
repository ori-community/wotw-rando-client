#pragma once
#include <Modloader/app/structs/IOAsyncResult.h>
#include <Modloader/app/structs/IOAsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IOAsyncResult {
        inline app::IOAsyncResult__Class** type_info() {
            static app::IOAsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IOAsyncResult__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IOAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::IOAsyncResult__Class>(type_info(), "System", "IOAsyncResult");
        }
        inline app::IOAsyncResult* create() {
            return il2cpp::create_object<app::IOAsyncResult>(get_class());
        }
    } // namespace IOAsyncResult
} // namespace app::classes::types
