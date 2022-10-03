#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncStreamReader {
        namespace {
            app::AsyncStreamReader__Class* type_info_ref = nullptr;
        }
        app::AsyncStreamReader__Class** type_info = &type_info_ref;
        inline app::AsyncStreamReader__Class* get_class() {
            return il2cpp::get_class<app::AsyncStreamReader__Class>(type_info, "System.Diagnostics", "AsyncStreamReader");
        }
        inline app::AsyncStreamReader* create() {
            return il2cpp::create_object<app::AsyncStreamReader>(get_class());
        }
    } // namespace AsyncStreamReader
} // namespace app::classes::types
