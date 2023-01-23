#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GeneralAsyncDelegate__Class.h>
#include <Modloader/app/structs/GeneralAsyncDelegate.h>

namespace app::classes::types {
    namespace GeneralAsyncDelegate {
        namespace {
            inline app::GeneralAsyncDelegate__Class* type_info_ref = nullptr;
        }
        inline app::GeneralAsyncDelegate__Class** type_info = &type_info_ref;
        inline app::GeneralAsyncDelegate__Class* get_class() {
            return il2cpp::get_class<app::GeneralAsyncDelegate__Class>(type_info, "System.Net", "GeneralAsyncDelegate");
        }
        inline app::GeneralAsyncDelegate* create() {
            return il2cpp::create_object<app::GeneralAsyncDelegate>(get_class());
        }
    } // namespace GeneralAsyncDelegate
} // namespace app::classes::types
