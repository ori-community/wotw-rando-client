#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPortalVisitor__Array {
        namespace {
            inline app::IPortalVisitor__Array__Class* type_info_ref = nullptr;
        }
        inline app::IPortalVisitor__Array__Class** type_info = &type_info_ref;
        inline app::IPortalVisitor__Array__Class* get_class() {
            return il2cpp::get_class<app::IPortalVisitor__Array__Class>(type_info, "", "IPortalVisitor[]");
        }
        inline app::IPortalVisitor__Array* create() {
            return il2cpp::create_object<app::IPortalVisitor__Array>(get_class());
        }
    } // namespace IPortalVisitor__Array
} // namespace app::classes::types
