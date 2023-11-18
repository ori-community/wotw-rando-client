#pragma once
#include <Modloader/app/structs/BitStack.h>
#include <Modloader/app/structs/BitStack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BitStack {
        inline app::BitStack__Class** type_info() {
            static app::BitStack__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BitStack__Class**)(modloader::win::memory::resolve_rva(0x0473FB90));
            }
            return cache;
        }
        inline app::BitStack__Class* get_class() {
            return il2cpp::get_class<app::BitStack__Class>(type_info(), "System.Xml", "BitStack");
        }
        inline app::BitStack* create() {
            return il2cpp::create_object<app::BitStack>(get_class());
        }
    } // namespace BitStack
} // namespace app::classes::types
