#pragma once
#include <Modloader/app/structs/JsonContainerContract.h>
#include <Modloader/app/structs/JsonContainerContract__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonContainerContract {
        inline app::JsonContainerContract__Class** type_info() {
            static app::JsonContainerContract__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonContainerContract__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonContainerContract__Class* get_class() {
            return il2cpp::get_class<app::JsonContainerContract__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonContainerContract");
        }
        inline app::JsonContainerContract* create() {
            return il2cpp::create_object<app::JsonContainerContract>(get_class());
        }
    } // namespace JsonContainerContract
} // namespace app::classes::types
