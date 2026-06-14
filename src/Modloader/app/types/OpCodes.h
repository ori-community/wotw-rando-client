#pragma once
#include <Modloader/app/structs/OpCodes.h>
#include <Modloader/app/structs/OpCodes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OpCodes {
        inline app::OpCodes__Class** type_info() {
            static app::OpCodes__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OpCodes__Class**)(modloader::win::memory::resolve_rva(0x04715BA8));
            }
            return cache;
        }
        inline app::OpCodes__Class* get_class() {
            return il2cpp::get_class<app::OpCodes__Class>(type_info(), "System.Reflection.Emit", "OpCodes");
        }
        inline app::OpCodes* create() {
            return il2cpp::create_object<app::OpCodes>(get_class());
        }
    } // namespace OpCodes
} // namespace app::classes::types
