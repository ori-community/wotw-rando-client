#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalException {
        inline app::XalException__Class** type_info = (app::XalException__Class**)(modloader::win::memory::resolve_rva(0x04731BE0));
        inline app::XalException__Class* get_class() {
            return il2cpp::get_class<app::XalException__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalException");
        }
        inline app::XalException* create() {
            return il2cpp::create_object<app::XalException>(get_class());
        }
    } // namespace XalException
} // namespace app::classes::types
