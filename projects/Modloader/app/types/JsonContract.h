#pragma once
#include <Modloader/app/structs/JsonContract.h>
#include <Modloader/app/structs/JsonContract__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonContract {
        inline app::JsonContract__Class** type_info() {
            static app::JsonContract__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonContract__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonContract__Class* get_class() {
            return il2cpp::get_class<app::JsonContract__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonContract");
        }
        inline app::JsonContract* create() {
            return il2cpp::create_object<app::JsonContract>(get_class());
        }
    } // namespace JsonContract
} // namespace app::classes::types
