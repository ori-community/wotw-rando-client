#pragma once
#include <Modloader/app/structs/LoremasterScreen_c.h>
#include <Modloader/app/structs/LoremasterScreen_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoremasterScreen_c {
        inline app::LoremasterScreen_c__Class** type_info() {
            static app::LoremasterScreen_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoremasterScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04733F30));
            }
            return cache;
        }
        inline app::LoremasterScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LoremasterScreen_c__Class>(type_info(), "", "LoremasterScreen", "<>c");
        }
        inline app::LoremasterScreen_c* create() {
            return il2cpp::create_object<app::LoremasterScreen_c>(get_class());
        }
    } // namespace LoremasterScreen_c
} // namespace app::classes::types
