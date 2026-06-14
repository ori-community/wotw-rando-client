#pragma once
#include <Modloader/app/structs/JsonDynamicContract.h>
#include <Modloader/app/structs/JsonDynamicContract__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonDynamicContract {
        inline app::JsonDynamicContract__Class** type_info() {
            static app::JsonDynamicContract__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonDynamicContract__Class**)(modloader::win::memory::resolve_rva(0x0470B9C0));
            }
            return cache;
        }
        inline app::JsonDynamicContract__Class* get_class() {
            return il2cpp::get_class<app::JsonDynamicContract__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonDynamicContract");
        }
        inline app::JsonDynamicContract* create() {
            return il2cpp::create_object<app::JsonDynamicContract>(get_class());
        }
    } // namespace JsonDynamicContract
} // namespace app::classes::types
