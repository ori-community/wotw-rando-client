#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinXmlToken__Enum {
        namespace {
            inline app::BinXmlToken__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BinXmlToken__Enum__Class** type_info = &type_info_ref;
        inline app::BinXmlToken__Enum__Class* get_class() {
            return il2cpp::get_class<app::BinXmlToken__Enum__Class>(type_info, "System.Xml", "BinXmlToken");
        }
        inline app::BinXmlToken__Enum* create() {
            return il2cpp::create_object<app::BinXmlToken__Enum>(get_class());
        }
    } // namespace BinXmlToken__Enum
} // namespace app::classes::types
