#pragma once
#include <Modloader/app/structs/JToken.h>
#include <Modloader/app/structs/JToken__Array.h>
#include <Modloader/app/structs/JToken__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JToken {
        inline app::JToken__Class** type_info() {
            static app::JToken__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JToken__Class**)(modloader::win::memory::resolve_rva(0x04761348));
            }
            return cache;
        }
        inline app::JToken__Class* get_class() {
            return il2cpp::get_class<app::JToken__Class>(type_info(), "Newtonsoft.Json.Linq", "JToken");
        }
        inline app::JToken* create() {
            return il2cpp::create_object<app::JToken>(get_class());
        }
        inline app::JToken__Array* create_array(int size) {
            return il2cpp::array_new<app::JToken__Array>(get_class(), size);
        }
        inline app::JToken__Array* create_array(const std::vector<app::JToken*>& items) {
            return il2cpp::array_new<app::JToken__Array>(get_class(), items);
        }
    } // namespace JToken
} // namespace app::classes::types
