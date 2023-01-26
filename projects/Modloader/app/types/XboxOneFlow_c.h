#pragma once
#include <Modloader/app/structs/XboxOneFlow_c.h>
#include <Modloader/app/structs/XboxOneFlow_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneFlow_c {
        inline app::XboxOneFlow_c__Class** type_info() {
            static app::XboxOneFlow_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxOneFlow_c__Class**)(modloader::win::memory::resolve_rva(0x0473CDD0));
            }
            return cache;
        }
        inline app::XboxOneFlow_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneFlow_c__Class>(type_info(), "", "XboxOneFlow", "<>c");
        }
        inline app::XboxOneFlow_c* create() {
            return il2cpp::create_object<app::XboxOneFlow_c>(get_class());
        }
    } // namespace XboxOneFlow_c
} // namespace app::classes::types
