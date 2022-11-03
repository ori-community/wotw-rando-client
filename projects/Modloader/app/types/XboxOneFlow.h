#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxOneFlow {
        inline app::XboxOneFlow__Class** type_info = (app::XboxOneFlow__Class**)(modloader::win::memory::resolve_rva(0x04786660));
        inline app::XboxOneFlow__Class* get_class() {
            return il2cpp::get_class<app::XboxOneFlow__Class>(type_info, "", "XboxOneFlow");
        }
        inline app::XboxOneFlow* create() {
            return il2cpp::create_object<app::XboxOneFlow>(get_class());
        }
    } // namespace XboxOneFlow
} // namespace app::classes::types
