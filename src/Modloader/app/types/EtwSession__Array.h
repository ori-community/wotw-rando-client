#pragma once
#include <Modloader/app/structs/EtwSession__Array.h>
#include <Modloader/app/structs/EtwSession__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EtwSession__Array {
        inline app::EtwSession__Array__Class** type_info() {
            static app::EtwSession__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EtwSession__Array__Class**)(modloader::win::memory::resolve_rva(0x0473E8F0));
            }
            return cache;
        }
        inline app::EtwSession__Array__Class* get_class() {
            return il2cpp::get_class<app::EtwSession__Array__Class>(type_info(), "System.Diagnostics.Tracing", "EtwSession[]");
        }
        inline app::EtwSession__Array* create() {
            return il2cpp::create_object<app::EtwSession__Array>(get_class());
        }
    } // namespace EtwSession__Array
} // namespace app::classes::types
