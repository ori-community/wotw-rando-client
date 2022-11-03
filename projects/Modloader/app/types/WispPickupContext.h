#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WispPickupContext {
        inline app::WispPickupContext__Class** type_info = (app::WispPickupContext__Class**)(modloader::win::memory::resolve_rva(0x0471B760));
        inline app::WispPickupContext__Class* get_class() {
            return il2cpp::get_class<app::WispPickupContext__Class>(type_info, "", "WispPickupContext");
        }
        inline app::WispPickupContext* create() {
            return il2cpp::create_object<app::WispPickupContext>(get_class());
        }
    } // namespace WispPickupContext
} // namespace app::classes::types
