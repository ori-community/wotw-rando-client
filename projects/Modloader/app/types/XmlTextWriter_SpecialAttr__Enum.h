#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlTextWriter_SpecialAttr__Enum__Class.h>
#include <Modloader/app/structs/XmlTextWriter_SpecialAttr__Enum.h>

namespace app::classes::types {
    namespace XmlTextWriter_SpecialAttr__Enum {
        namespace {
            inline app::XmlTextWriter_SpecialAttr__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XmlTextWriter_SpecialAttr__Enum__Class** type_info = &type_info_ref;
        inline app::XmlTextWriter_SpecialAttr__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextWriter_SpecialAttr__Enum__Class>(type_info, "System.Xml", "XmlTextWriter", "SpecialAttr");
        }
        inline app::XmlTextWriter_SpecialAttr__Enum* create() {
            return il2cpp::create_object<app::XmlTextWriter_SpecialAttr__Enum>(get_class());
        }
    } // namespace XmlTextWriter_SpecialAttr__Enum
} // namespace app::classes::types
