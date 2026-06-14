#pragma once
#include <Modloader/app/structs/MonoField.h>
#include <Modloader/app/structs/MonoField__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoField {
        inline app::MonoField__Class** type_info() {
            static app::MonoField__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoField__Class**)(modloader::win::memory::resolve_rva(0x0475D940));
            }
            return cache;
        }
        inline app::MonoField__Class* get_class() {
            return il2cpp::get_class<app::MonoField__Class>(type_info(), "System.Reflection", "MonoField");
        }
        inline app::MonoField* create() {
            return il2cpp::create_object<app::MonoField>(get_class());
        }
    } // namespace MonoField
} // namespace app::classes::types
