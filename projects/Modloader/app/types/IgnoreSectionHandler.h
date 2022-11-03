#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IgnoreSectionHandler {
        namespace {
            inline app::IgnoreSectionHandler__Class* type_info_ref = nullptr;
        }
        inline app::IgnoreSectionHandler__Class** type_info = &type_info_ref;
        inline app::IgnoreSectionHandler__Class* get_class() {
            return il2cpp::get_class<app::IgnoreSectionHandler__Class>(type_info, "System.Configuration", "IgnoreSectionHandler");
        }
        inline app::IgnoreSectionHandler* create() {
            return il2cpp::create_object<app::IgnoreSectionHandler>(get_class());
        }
    } // namespace IgnoreSectionHandler
} // namespace app::classes::types
