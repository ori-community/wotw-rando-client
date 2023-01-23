#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IOAsyncResult__Class.h>
#include <Modloader/app/structs/IOAsyncResult.h>

namespace app::classes::types {
    namespace IOAsyncResult {
        namespace {
            inline app::IOAsyncResult__Class* type_info_ref = nullptr;
        }
        inline app::IOAsyncResult__Class** type_info = &type_info_ref;
        inline app::IOAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::IOAsyncResult__Class>(type_info, "System", "IOAsyncResult");
        }
        inline app::IOAsyncResult* create() {
            return il2cpp::create_object<app::IOAsyncResult>(get_class());
        }
    } // namespace IOAsyncResult
} // namespace app::classes::types
