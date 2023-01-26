#pragma once
#include <Modloader/app/structs/IPortalVisitor__Array.h>
#include <Modloader/app/structs/IPortalVisitor__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPortalVisitor__Array {
        inline app::IPortalVisitor__Array__Class** type_info() {
            static app::IPortalVisitor__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPortalVisitor__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPortalVisitor__Array__Class* get_class() {
            return il2cpp::get_class<app::IPortalVisitor__Array__Class>(type_info(), "", "IPortalVisitor[]");
        }
        inline app::IPortalVisitor__Array* create() {
            return il2cpp::create_object<app::IPortalVisitor__Array>(get_class());
        }
    } // namespace IPortalVisitor__Array
} // namespace app::classes::types
