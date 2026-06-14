#pragma once
#include <Modloader/app/structs/KustoDataReader.h>
#include <Modloader/app/structs/KustoDataReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KustoDataReader {
        inline app::KustoDataReader__Class** type_info() {
            static app::KustoDataReader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KustoDataReader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KustoDataReader__Class* get_class() {
            return il2cpp::get_class<app::KustoDataReader__Class>(type_info(), "Moon.Network.Web", "KustoDataReader");
        }
        inline app::KustoDataReader* create() {
            return il2cpp::create_object<app::KustoDataReader>(get_class());
        }
    } // namespace KustoDataReader
} // namespace app::classes::types
