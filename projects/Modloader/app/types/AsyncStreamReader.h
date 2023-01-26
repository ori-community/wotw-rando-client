#pragma once
#include <Modloader/app/structs/AsyncStreamReader.h>
#include <Modloader/app/structs/AsyncStreamReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncStreamReader {
        inline app::AsyncStreamReader__Class** type_info() {
            static app::AsyncStreamReader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsyncStreamReader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsyncStreamReader__Class* get_class() {
            return il2cpp::get_class<app::AsyncStreamReader__Class>(type_info(), "System.Diagnostics", "AsyncStreamReader");
        }
        inline app::AsyncStreamReader* create() {
            return il2cpp::create_object<app::AsyncStreamReader>(get_class());
        }
    } // namespace AsyncStreamReader
} // namespace app::classes::types
