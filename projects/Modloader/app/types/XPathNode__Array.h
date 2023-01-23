#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XPathNode__Array__Class.h>
#include <Modloader/app/structs/XPathNode__Array.h>

namespace app::classes::types {
    namespace XPathNode__Array {
        namespace {
            inline app::XPathNode__Array__Class* type_info_ref = nullptr;
        }
        inline app::XPathNode__Array__Class** type_info = &type_info_ref;
        inline app::XPathNode__Array__Class* get_class() {
            return il2cpp::get_class<app::XPathNode__Array__Class>(type_info, "MS.Internal.Xml.Cache", "XPathNode[]");
        }
        inline app::XPathNode__Array* create() {
            return il2cpp::create_object<app::XPathNode__Array>(get_class());
        }
    } // namespace XPathNode__Array
} // namespace app::classes::types
