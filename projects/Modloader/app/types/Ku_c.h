#pragma once
#include <Modloader/app/structs/Ku_c.h>
#include <Modloader/app/structs/Ku_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ku_c {
        inline app::Ku_c__Class** type_info() {
            static app::Ku_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Ku_c__Class**)(modloader::win::memory::resolve_rva(0x04746998));
            }
            return cache;
        }
        inline app::Ku_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Ku_c__Class>(type_info(), "", "Ku", "<>c");
        }
        inline app::Ku_c* create() {
            return il2cpp::create_object<app::Ku_c>(get_class());
        }
    } // namespace Ku_c
} // namespace app::classes::types
