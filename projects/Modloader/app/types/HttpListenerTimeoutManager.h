#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpListenerTimeoutManager__Class.h>
#include <Modloader/app/structs/HttpListenerTimeoutManager.h>

namespace app::classes::types {
    namespace HttpListenerTimeoutManager {
        namespace {
            inline app::HttpListenerTimeoutManager__Class* type_info_ref = nullptr;
        }
        inline app::HttpListenerTimeoutManager__Class** type_info = &type_info_ref;
        inline app::HttpListenerTimeoutManager__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerTimeoutManager__Class>(type_info, "System.Net", "HttpListenerTimeoutManager");
        }
        inline app::HttpListenerTimeoutManager* create() {
            return il2cpp::create_object<app::HttpListenerTimeoutManager>(get_class());
        }
    } // namespace HttpListenerTimeoutManager
} // namespace app::classes::types
