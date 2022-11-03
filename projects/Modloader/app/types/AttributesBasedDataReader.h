#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttributesBasedDataReader {
        namespace {
            inline app::AttributesBasedDataReader__Class* type_info_ref = nullptr;
        }
        inline app::AttributesBasedDataReader__Class** type_info = &type_info_ref;
        inline app::AttributesBasedDataReader__Class* get_class() {
            return il2cpp::get_class<app::AttributesBasedDataReader__Class>(type_info, "Moon.Network.Web", "AttributesBasedDataReader");
        }
        inline app::AttributesBasedDataReader* create() {
            return il2cpp::create_object<app::AttributesBasedDataReader>(get_class());
        }
    } // namespace AttributesBasedDataReader
} // namespace app::classes::types
