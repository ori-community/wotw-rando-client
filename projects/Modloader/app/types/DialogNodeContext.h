#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DialogNodeContext {
        inline app::DialogNodeContext__Class** type_info = (app::DialogNodeContext__Class**)(modloader::win::memory::resolve_rva(0x047900E8));
        inline app::DialogNodeContext__Class* get_class() {
            return il2cpp::get_class<app::DialogNodeContext__Class>(type_info, "", "DialogNodeContext");
        }
        inline app::DialogNodeContext* create() {
            return il2cpp::create_object<app::DialogNodeContext>(get_class());
        }
    } // namespace DialogNodeContext
} // namespace app::classes::types
