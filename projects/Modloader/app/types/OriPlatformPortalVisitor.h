#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OriPlatformPortalVisitor {
        namespace {
            inline app::OriPlatformPortalVisitor__Class* type_info_ref = nullptr;
        }
        inline app::OriPlatformPortalVisitor__Class** type_info = &type_info_ref;
        inline app::OriPlatformPortalVisitor__Class* get_class() {
            return il2cpp::get_class<app::OriPlatformPortalVisitor__Class>(type_info, "", "OriPlatformPortalVisitor");
        }
        inline app::OriPlatformPortalVisitor* create() {
            return il2cpp::create_object<app::OriPlatformPortalVisitor>(get_class());
        }
    } // namespace OriPlatformPortalVisitor
} // namespace app::classes::types
