#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XPathNodeRef__Array__Class.h>
#include <Modloader/app/structs/XPathNodeRef__Array.h>

namespace app::classes::types {
    namespace XPathNodeRef__Array {
        namespace {
            inline app::XPathNodeRef__Array__Class* type_info_ref = nullptr;
        }
        inline app::XPathNodeRef__Array__Class** type_info = &type_info_ref;
        inline app::XPathNodeRef__Array__Class* get_class() {
            return il2cpp::get_class<app::XPathNodeRef__Array__Class>(type_info, "MS.Internal.Xml.Cache", "XPathNodeRef[]");
        }
        inline app::XPathNodeRef__Array* create() {
            return il2cpp::create_object<app::XPathNodeRef__Array>(get_class());
        }
    } // namespace XPathNodeRef__Array
} // namespace app::classes::types
