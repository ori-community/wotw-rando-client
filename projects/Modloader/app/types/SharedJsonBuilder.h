#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SharedJsonBuilder {
        inline app::SharedJsonBuilder__Class** type_info = (app::SharedJsonBuilder__Class**)(modloader::win::memory::resolve_rva(0x04738260));
        inline app::SharedJsonBuilder__Class* get_class() {
            return il2cpp::get_class<app::SharedJsonBuilder__Class>(type_info, "Moon", "SharedJsonBuilder");
        }
        inline app::SharedJsonBuilder* create() {
            return il2cpp::create_object<app::SharedJsonBuilder>(get_class());
        }
        inline app::SharedJsonBuilder__Boxed* box(app::SharedJsonBuilder value) {
            return il2cpp::box_value<app::SharedJsonBuilder__Boxed>(get_class(), value);
        }
    } // namespace SharedJsonBuilder
} // namespace app::classes::types
