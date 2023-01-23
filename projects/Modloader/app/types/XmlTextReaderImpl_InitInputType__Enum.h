#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlTextReaderImpl_InitInputType__Enum__Class.h>
#include <Modloader/app/structs/XmlTextReaderImpl_InitInputType__Enum.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_InitInputType__Enum {
        namespace {
            inline app::XmlTextReaderImpl_InitInputType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XmlTextReaderImpl_InitInputType__Enum__Class** type_info = &type_info_ref;
        inline app::XmlTextReaderImpl_InitInputType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_InitInputType__Enum__Class>(type_info, "System.Xml", "XmlTextReaderImpl", "InitInputType");
        }
        inline app::XmlTextReaderImpl_InitInputType__Enum* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_InitInputType__Enum>(get_class());
        }
    } // namespace XmlTextReaderImpl_InitInputType__Enum
} // namespace app::classes::types
