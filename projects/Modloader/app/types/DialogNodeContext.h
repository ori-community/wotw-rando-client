#pragma once
#include <Modloader/app/structs/DialogNodeContext.h>
#include <Modloader/app/structs/DialogNodeContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DialogNodeContext {
        inline app::DialogNodeContext__Class** type_info() {
            static app::DialogNodeContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DialogNodeContext__Class**)(modloader::win::memory::resolve_rva(0x047900E8));
            }
            return cache;
        }
        inline app::DialogNodeContext__Class* get_class() {
            return il2cpp::get_class<app::DialogNodeContext__Class>(type_info(), "", "DialogNodeContext");
        }
        inline app::DialogNodeContext* create() {
            return il2cpp::create_object<app::DialogNodeContext>(get_class());
        }
    } // namespace DialogNodeContext
} // namespace app::classes::types
