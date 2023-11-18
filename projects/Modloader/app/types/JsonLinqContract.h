#pragma once
#include <Modloader/app/structs/JsonLinqContract.h>
#include <Modloader/app/structs/JsonLinqContract__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonLinqContract {
        inline app::JsonLinqContract__Class** type_info() {
            static app::JsonLinqContract__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonLinqContract__Class**)(modloader::win::memory::resolve_rva(0x04776010));
            }
            return cache;
        }
        inline app::JsonLinqContract__Class* get_class() {
            return il2cpp::get_class<app::JsonLinqContract__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonLinqContract");
        }
        inline app::JsonLinqContract* create() {
            return il2cpp::create_object<app::JsonLinqContract>(get_class());
        }
    } // namespace JsonLinqContract
} // namespace app::classes::types
