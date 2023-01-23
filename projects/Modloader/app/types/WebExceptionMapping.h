#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WebExceptionMapping__Class.h>
#include <Modloader/app/structs/WebExceptionMapping.h>

namespace app::classes::types {
    namespace WebExceptionMapping {
        inline app::WebExceptionMapping__Class** type_info = (app::WebExceptionMapping__Class**)(modloader::win::memory::resolve_rva(0x04772298));
        inline app::WebExceptionMapping__Class* get_class() {
            return il2cpp::get_class<app::WebExceptionMapping__Class>(type_info, "System.Net", "WebExceptionMapping");
        }
        inline app::WebExceptionMapping* create() {
            return il2cpp::create_object<app::WebExceptionMapping>(get_class());
        }
    } // namespace WebExceptionMapping
} // namespace app::classes::types
