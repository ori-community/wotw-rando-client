#pragma once
#include <Modloader/app/structs/JsonTypeReflector.h>
#include <Modloader/app/structs/JsonTypeReflector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonTypeReflector {
        inline app::JsonTypeReflector__Class** type_info() {
            static app::JsonTypeReflector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonTypeReflector__Class**)(modloader::win::memory::resolve_rva(0x04728D20));
            }
            return cache;
        }
        inline app::JsonTypeReflector__Class* get_class() {
            return il2cpp::get_class<app::JsonTypeReflector__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonTypeReflector");
        }
        inline app::JsonTypeReflector* create() {
            return il2cpp::create_object<app::JsonTypeReflector>(get_class());
        }
    } // namespace JsonTypeReflector
} // namespace app::classes::types
