#pragma once
#include <Modloader/app/structs/JsonDictionaryContract.h>
#include <Modloader/app/structs/JsonDictionaryContract__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonDictionaryContract {
        inline app::JsonDictionaryContract__Class** type_info() {
            static app::JsonDictionaryContract__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonDictionaryContract__Class**)(modloader::win::memory::resolve_rva(0x04739F80));
            }
            return cache;
        }
        inline app::JsonDictionaryContract__Class* get_class() {
            return il2cpp::get_class<app::JsonDictionaryContract__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonDictionaryContract");
        }
        inline app::JsonDictionaryContract* create() {
            return il2cpp::create_object<app::JsonDictionaryContract>(get_class());
        }
    } // namespace JsonDictionaryContract
} // namespace app::classes::types
