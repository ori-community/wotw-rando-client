#pragma once
#include <Modloader/app/structs/JsonArrayContract.h>
#include <Modloader/app/structs/JsonArrayContract__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonArrayContract {
        inline app::JsonArrayContract__Class** type_info() {
            static app::JsonArrayContract__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonArrayContract__Class**)(modloader::win::memory::resolve_rva(0x047395A8));
            }
            return cache;
        }
        inline app::JsonArrayContract__Class* get_class() {
            return il2cpp::get_class<app::JsonArrayContract__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonArrayContract");
        }
        inline app::JsonArrayContract* create() {
            return il2cpp::create_object<app::JsonArrayContract>(get_class());
        }
    } // namespace JsonArrayContract
} // namespace app::classes::types
