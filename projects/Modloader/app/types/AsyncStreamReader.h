#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AsyncStreamReader__Class.h>
#include <Modloader/app/structs/AsyncStreamReader.h>

namespace app::classes::types {
    namespace AsyncStreamReader {
        namespace {
            inline app::AsyncStreamReader__Class* type_info_ref = nullptr;
        }
        inline app::AsyncStreamReader__Class** type_info = &type_info_ref;
        inline app::AsyncStreamReader__Class* get_class() {
            return il2cpp::get_class<app::AsyncStreamReader__Class>(type_info, "System.Diagnostics", "AsyncStreamReader");
        }
        inline app::AsyncStreamReader* create() {
            return il2cpp::create_object<app::AsyncStreamReader>(get_class());
        }
    } // namespace AsyncStreamReader
} // namespace app::classes::types
