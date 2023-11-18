#pragma once
#include <Modloader/app/structs/Operators.h>
#include <Modloader/app/structs/Operators__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Operators {
        inline app::Operators__Class** type_info() {
            static app::Operators__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Operators__Class**)(modloader::win::memory::resolve_rva(0x04783638));
            }
            return cache;
        }
        inline app::Operators__Class* get_class() {
            return il2cpp::get_class<app::Operators__Class>(type_info(), "System.Data", "Operators");
        }
        inline app::Operators* create() {
            return il2cpp::create_object<app::Operators>(get_class());
        }
    } // namespace Operators
} // namespace app::classes::types
