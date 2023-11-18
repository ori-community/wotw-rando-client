#pragma once
#include <Modloader/app/structs/HttpContinueDelegate.h>
#include <Modloader/app/structs/HttpContinueDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpContinueDelegate {
        inline app::HttpContinueDelegate__Class** type_info() {
            static app::HttpContinueDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpContinueDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpContinueDelegate__Class* get_class() {
            return il2cpp::get_class<app::HttpContinueDelegate__Class>(type_info(), "System.Net", "HttpContinueDelegate");
        }
        inline app::HttpContinueDelegate* create() {
            return il2cpp::create_object<app::HttpContinueDelegate>(get_class());
        }
    } // namespace HttpContinueDelegate
} // namespace app::classes::types
