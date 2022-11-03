#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HTTPRequestHandle {
        inline app::HTTPRequestHandle__Class** type_info = (app::HTTPRequestHandle__Class**)(modloader::win::memory::resolve_rva(0x0474D658));
        inline app::HTTPRequestHandle__Class* get_class() {
            return il2cpp::get_class<app::HTTPRequestHandle__Class>(type_info, "Steamworks", "HTTPRequestHandle");
        }
        inline app::HTTPRequestHandle* create() {
            return il2cpp::create_object<app::HTTPRequestHandle>(get_class());
        }
        inline app::HTTPRequestHandle__Boxed* box(app::HTTPRequestHandle value) {
            return il2cpp::box_value<app::HTTPRequestHandle__Boxed>(get_class(), value);
        }
    } // namespace HTTPRequestHandle
} // namespace app::classes::types
