#pragma once
#include <Modloader/app/structs/JsonStringContract.h>
#include <Modloader/app/structs/JsonStringContract__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonStringContract {
        inline app::JsonStringContract__Class** type_info() {
            static app::JsonStringContract__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonStringContract__Class**)(modloader::win::memory::resolve_rva(0x0470D598));
            }
            return cache;
        }
        inline app::JsonStringContract__Class* get_class() {
            return il2cpp::get_class<app::JsonStringContract__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonStringContract");
        }
        inline app::JsonStringContract* create() {
            return il2cpp::create_object<app::JsonStringContract>(get_class());
        }
    } // namespace JsonStringContract
} // namespace app::classes::types
