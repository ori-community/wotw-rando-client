#pragma once
#include <Modloader/app/structs/JSONDataWriter.h>
#include <Modloader/app/structs/JSONDataWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JSONDataWriter {
        inline app::JSONDataWriter__Class** type_info() {
            static app::JSONDataWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JSONDataWriter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JSONDataWriter__Class* get_class() {
            return il2cpp::get_class<app::JSONDataWriter__Class>(type_info(), "Moon.Network.Web", "JSONDataWriter");
        }
        inline app::JSONDataWriter* create() {
            return il2cpp::create_object<app::JSONDataWriter>(get_class());
        }
    } // namespace JSONDataWriter
} // namespace app::classes::types
