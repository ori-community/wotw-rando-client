#pragma once
#include <Modloader/app/structs/TailoringInfo__Array.h>
#include <Modloader/app/structs/TailoringInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TailoringInfo__Array {
        inline app::TailoringInfo__Array__Class** type_info() {
            static app::TailoringInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TailoringInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0473FF88));
            }
            return cache;
        }
        inline app::TailoringInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::TailoringInfo__Array__Class>(type_info(), "Mono.Globalization.Unicode", "TailoringInfo[]");
        }
        inline app::TailoringInfo__Array* create() {
            return il2cpp::create_object<app::TailoringInfo__Array>(get_class());
        }
    } // namespace TailoringInfo__Array
} // namespace app::classes::types
