#pragma once
#include <Modloader/app/structs/IAxisInput__Array.h>
#include <Modloader/app/structs/IAxisInput__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAxisInput__Array {
        inline app::IAxisInput__Array__Class** type_info() {
            static app::IAxisInput__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IAxisInput__Array__Class**)(modloader::win::memory::resolve_rva(0x047160B8));
            }
            return cache;
        }
        inline app::IAxisInput__Array__Class* get_class() {
            return il2cpp::get_class<app::IAxisInput__Array__Class>(type_info(), "SmartInput", "IAxisInput[]");
        }
        inline app::IAxisInput__Array* create() {
            return il2cpp::create_object<app::IAxisInput__Array>(get_class());
        }
    } // namespace IAxisInput__Array
} // namespace app::classes::types
