#pragma once
#include <Modloader/app/structs/SharedJsonBuilder_c.h>
#include <Modloader/app/structs/SharedJsonBuilder_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SharedJsonBuilder_c {
        inline app::SharedJsonBuilder_c__Class** type_info() {
            static app::SharedJsonBuilder_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SharedJsonBuilder_c__Class**)(modloader::win::memory::resolve_rva(0x04708630));
            }
            return cache;
        }
        inline app::SharedJsonBuilder_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SharedJsonBuilder_c__Class>(type_info(), "Moon", "SharedJsonBuilder", "<>c");
        }
        inline app::SharedJsonBuilder_c* create() {
            return il2cpp::create_object<app::SharedJsonBuilder_c>(get_class());
        }
    } // namespace SharedJsonBuilder_c
} // namespace app::classes::types
