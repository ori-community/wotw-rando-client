#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpAbortDelegate__Class.h>
#include <Modloader/app/structs/HttpAbortDelegate.h>

namespace app::classes::types {
    namespace HttpAbortDelegate {
        inline app::HttpAbortDelegate__Class** type_info = (app::HttpAbortDelegate__Class**)(modloader::win::memory::resolve_rva(0x0470A8C8));
        inline app::HttpAbortDelegate__Class* get_class() {
            return il2cpp::get_class<app::HttpAbortDelegate__Class>(type_info, "System.Net", "HttpAbortDelegate");
        }
        inline app::HttpAbortDelegate* create() {
            return il2cpp::create_object<app::HttpAbortDelegate>(get_class());
        }
    } // namespace HttpAbortDelegate
} // namespace app::classes::types
