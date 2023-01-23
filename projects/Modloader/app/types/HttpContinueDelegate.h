#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpContinueDelegate__Class.h>
#include <Modloader/app/structs/HttpContinueDelegate.h>

namespace app::classes::types {
    namespace HttpContinueDelegate {
        namespace {
            inline app::HttpContinueDelegate__Class* type_info_ref = nullptr;
        }
        inline app::HttpContinueDelegate__Class** type_info = &type_info_ref;
        inline app::HttpContinueDelegate__Class* get_class() {
            return il2cpp::get_class<app::HttpContinueDelegate__Class>(type_info, "System.Net", "HttpContinueDelegate");
        }
        inline app::HttpContinueDelegate* create() {
            return il2cpp::create_object<app::HttpContinueDelegate>(get_class());
        }
    } // namespace HttpContinueDelegate
} // namespace app::classes::types
