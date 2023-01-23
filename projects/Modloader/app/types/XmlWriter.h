#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlWriter__Class.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::types {
    namespace XmlWriter {
        namespace {
            inline app::XmlWriter__Class* type_info_ref = nullptr;
        }
        inline app::XmlWriter__Class** type_info = &type_info_ref;
        inline app::XmlWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlWriter__Class>(type_info, "System.Xml", "XmlWriter");
        }
        inline app::XmlWriter* create() {
            return il2cpp::create_object<app::XmlWriter>(get_class());
        }
    } // namespace XmlWriter
} // namespace app::classes::types
