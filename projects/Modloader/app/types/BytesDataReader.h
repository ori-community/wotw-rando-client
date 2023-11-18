#pragma once
#include <Modloader/app/structs/BytesDataReader.h>
#include <Modloader/app/structs/BytesDataReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BytesDataReader {
        inline app::BytesDataReader__Class** type_info() {
            static app::BytesDataReader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BytesDataReader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BytesDataReader__Class* get_class() {
            return il2cpp::get_class<app::BytesDataReader__Class>(type_info(), "Moon.Network.Web", "BytesDataReader");
        }
        inline app::BytesDataReader* create() {
            return il2cpp::create_object<app::BytesDataReader>(get_class());
        }
    } // namespace BytesDataReader
} // namespace app::classes::types
