#pragma once
#include <Modloader/app/structs/Wrapper_c.h>
#include <Modloader/app/structs/Wrapper_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Wrapper_c {
        inline app::Wrapper_c__Class** type_info() {
            static app::Wrapper_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Wrapper_c__Class**)(modloader::win::memory::resolve_rva(0x04793B58));
            }
            return cache;
        }
        inline app::Wrapper_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Wrapper_c__Class>(type_info(), "Grdk", "Wrapper", "<>c");
        }
        inline app::Wrapper_c* create() {
            return il2cpp::create_object<app::Wrapper_c>(get_class());
        }
    } // namespace Wrapper_c
} // namespace app::classes::types
