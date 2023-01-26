#pragma once
#include <Modloader/app/structs/AttributesBasedDataReader.h>
#include <Modloader/app/structs/AttributesBasedDataReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttributesBasedDataReader {
        inline app::AttributesBasedDataReader__Class** type_info() {
            static app::AttributesBasedDataReader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttributesBasedDataReader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttributesBasedDataReader__Class* get_class() {
            return il2cpp::get_class<app::AttributesBasedDataReader__Class>(type_info(), "Moon.Network.Web", "AttributesBasedDataReader");
        }
        inline app::AttributesBasedDataReader* create() {
            return il2cpp::create_object<app::AttributesBasedDataReader>(get_class());
        }
    } // namespace AttributesBasedDataReader
} // namespace app::classes::types
