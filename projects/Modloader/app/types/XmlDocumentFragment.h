#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlDocumentFragment__Class.h>
#include <Modloader/app/structs/XmlDocumentFragment.h>

namespace app::classes::types {
    namespace XmlDocumentFragment {
        inline app::XmlDocumentFragment__Class** type_info = (app::XmlDocumentFragment__Class**)(modloader::win::memory::resolve_rva(0x0478F840));
        inline app::XmlDocumentFragment__Class* get_class() {
            return il2cpp::get_class<app::XmlDocumentFragment__Class>(type_info, "System.Xml", "XmlDocumentFragment");
        }
        inline app::XmlDocumentFragment* create() {
            return il2cpp::create_object<app::XmlDocumentFragment>(get_class());
        }
    } // namespace XmlDocumentFragment
} // namespace app::classes::types
