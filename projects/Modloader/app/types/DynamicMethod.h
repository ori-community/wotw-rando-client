#pragma once
#include <Modloader/app/structs/DynamicMethod.h>
#include <Modloader/app/structs/DynamicMethod__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicMethod {
        inline app::DynamicMethod__Class** type_info() {
            static app::DynamicMethod__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicMethod__Class**)(modloader::win::memory::resolve_rva(0x047195F8));
            }
            return cache;
        }
        inline app::DynamicMethod__Class* get_class() {
            return il2cpp::get_class<app::DynamicMethod__Class>(type_info(), "System.Reflection.Emit", "DynamicMethod");
        }
        inline app::DynamicMethod* create() {
            return il2cpp::create_object<app::DynamicMethod>(get_class());
        }
    } // namespace DynamicMethod
} // namespace app::classes::types
