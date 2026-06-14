#pragma once
#include <Modloader/app/structs/TargetException.h>
#include <Modloader/app/structs/TargetException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetException {
        inline app::TargetException__Class** type_info() {
            static app::TargetException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TargetException__Class**)(modloader::win::memory::resolve_rva(0x04758D10));
            }
            return cache;
        }
        inline app::TargetException__Class* get_class() {
            return il2cpp::get_class<app::TargetException__Class>(type_info(), "System.Reflection", "TargetException");
        }
        inline app::TargetException* create() {
            return il2cpp::create_object<app::TargetException>(get_class());
        }
    } // namespace TargetException
} // namespace app::classes::types
