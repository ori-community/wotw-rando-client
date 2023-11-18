#pragma once
#include <Modloader/app/structs/JsonContract_c_DisplayClass57_0.h>
#include <Modloader/app/structs/JsonContract_c_DisplayClass57_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonContract_c_DisplayClass57_0 {
        inline app::JsonContract_c_DisplayClass57_0__Class** type_info() {
            static app::JsonContract_c_DisplayClass57_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonContract_c_DisplayClass57_0__Class**)(modloader::win::memory::resolve_rva(0x04794F28));
            }
            return cache;
        }
        inline app::JsonContract_c_DisplayClass57_0__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonContract_c_DisplayClass57_0__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonContract", "<>c__DisplayClass57_0");
        }
        inline app::JsonContract_c_DisplayClass57_0* create() {
            return il2cpp::create_object<app::JsonContract_c_DisplayClass57_0>(get_class());
        }
    } // namespace JsonContract_c_DisplayClass57_0
} // namespace app::classes::types
