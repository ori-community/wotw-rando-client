#pragma once
#include <Modloader/app/structs/HttpResponseObject.h>
#include <Modloader/app/structs/HttpResponseObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpResponseObject {
        inline app::HttpResponseObject__Class** type_info() {
            static app::HttpResponseObject__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpResponseObject__Class**)(modloader::win::memory::resolve_rva(0x04717E38));
            }
            return cache;
        }
        inline app::HttpResponseObject__Class* get_class() {
            return il2cpp::get_class<app::HttpResponseObject__Class>(type_info(), "PlayFab.SharedModels", "HttpResponseObject");
        }
        inline app::HttpResponseObject* create() {
            return il2cpp::create_object<app::HttpResponseObject>(get_class());
        }
    } // namespace HttpResponseObject
} // namespace app::classes::types
