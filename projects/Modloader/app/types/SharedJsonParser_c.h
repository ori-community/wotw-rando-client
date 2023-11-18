#pragma once
#include <Modloader/app/structs/SharedJsonParser_c.h>
#include <Modloader/app/structs/SharedJsonParser_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SharedJsonParser_c {
        inline app::SharedJsonParser_c__Class** type_info() {
            static app::SharedJsonParser_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SharedJsonParser_c__Class**)(modloader::win::memory::resolve_rva(0x04791348));
            }
            return cache;
        }
        inline app::SharedJsonParser_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SharedJsonParser_c__Class>(type_info(), "Moon", "SharedJsonParser", "<>c");
        }
        inline app::SharedJsonParser_c* create() {
            return il2cpp::create_object<app::SharedJsonParser_c>(get_class());
        }
    } // namespace SharedJsonParser_c
} // namespace app::classes::types
