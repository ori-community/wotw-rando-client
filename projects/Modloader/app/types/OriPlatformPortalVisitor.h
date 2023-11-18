#pragma once
#include <Modloader/app/structs/OriPlatformPortalVisitor.h>
#include <Modloader/app/structs/OriPlatformPortalVisitor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriPlatformPortalVisitor {
        inline app::OriPlatformPortalVisitor__Class** type_info() {
            static app::OriPlatformPortalVisitor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriPlatformPortalVisitor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriPlatformPortalVisitor__Class* get_class() {
            return il2cpp::get_class<app::OriPlatformPortalVisitor__Class>(type_info(), "", "OriPlatformPortalVisitor");
        }
        inline app::OriPlatformPortalVisitor* create() {
            return il2cpp::create_object<app::OriPlatformPortalVisitor>(get_class());
        }
    } // namespace OriPlatformPortalVisitor
} // namespace app::classes::types
