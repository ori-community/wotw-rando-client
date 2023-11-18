#pragma once
#include <Modloader/app/structs/IBouncealbeFromCartBouncer.h>
#include <Modloader/app/structs/IBouncealbeFromCartBouncer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBouncealbeFromCartBouncer {
        inline app::IBouncealbeFromCartBouncer__Class** type_info() {
            static app::IBouncealbeFromCartBouncer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IBouncealbeFromCartBouncer__Class**)(modloader::win::memory::resolve_rva(0x0473DA80));
            }
            return cache;
        }
        inline app::IBouncealbeFromCartBouncer__Class* get_class() {
            return il2cpp::get_class<app::IBouncealbeFromCartBouncer__Class>(type_info(), "", "IBouncealbeFromCartBouncer");
        }
    } // namespace IBouncealbeFromCartBouncer
} // namespace app::classes::types
