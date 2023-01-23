#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CursorRendererOS__Class.h>
#include <Modloader/app/structs/CursorRendererOS.h>

namespace app::classes::types {
    namespace CursorRendererOS {
        namespace {
            inline app::CursorRendererOS__Class* type_info_ref = nullptr;
        }
        inline app::CursorRendererOS__Class** type_info = &type_info_ref;
        inline app::CursorRendererOS__Class* get_class() {
            return il2cpp::get_class<app::CursorRendererOS__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "CursorRendererOS");
        }
        inline app::CursorRendererOS* create() {
            return il2cpp::create_object<app::CursorRendererOS>(get_class());
        }
    } // namespace CursorRendererOS
} // namespace app::classes::types
