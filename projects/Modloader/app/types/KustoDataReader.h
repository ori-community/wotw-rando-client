#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KustoDataReader {
        namespace {
            inline app::KustoDataReader__Class* type_info_ref = nullptr;
        }
        inline app::KustoDataReader__Class** type_info = &type_info_ref;
        inline app::KustoDataReader__Class* get_class() {
            return il2cpp::get_class<app::KustoDataReader__Class>(type_info, "Moon.Network.Web", "KustoDataReader");
        }
        inline app::KustoDataReader* create() {
            return il2cpp::create_object<app::KustoDataReader>(get_class());
        }
    } // namespace KustoDataReader
} // namespace app::classes::types
