#pragma once
#include <Modloader/app/structs/HttpContent.h>
#include <Modloader/app/structs/HttpContent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpContent {
        inline app::HttpContent__Class** type_info() {
            static app::HttpContent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpContent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpContent__Class* get_class() {
            return il2cpp::get_class<app::HttpContent__Class>(type_info(), "System.Net.Http", "HttpContent");
        }
        inline app::HttpContent* create() {
            return il2cpp::create_object<app::HttpContent>(get_class());
        }
    } // namespace HttpContent
} // namespace app::classes::types
