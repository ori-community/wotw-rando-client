#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WebRequest_DesignerWebRequestCreate__Class.h>
#include <Modloader/app/structs/WebRequest_DesignerWebRequestCreate.h>

namespace app::classes::types {
    namespace WebRequest_DesignerWebRequestCreate {
        inline app::WebRequest_DesignerWebRequestCreate__Class** type_info = (app::WebRequest_DesignerWebRequestCreate__Class**)(modloader::win::memory::resolve_rva(0x04734710));
        inline app::WebRequest_DesignerWebRequestCreate__Class* get_class() {
            return il2cpp::get_nested_class<app::WebRequest_DesignerWebRequestCreate__Class>(type_info, "System.Net", "WebRequest", "DesignerWebRequestCreate");
        }
        inline app::WebRequest_DesignerWebRequestCreate* create() {
            return il2cpp::create_object<app::WebRequest_DesignerWebRequestCreate>(get_class());
        }
    } // namespace WebRequest_DesignerWebRequestCreate
} // namespace app::classes::types
