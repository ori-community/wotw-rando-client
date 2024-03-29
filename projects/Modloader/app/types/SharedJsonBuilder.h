#pragma once
#include <Modloader/app/structs/SharedJsonBuilder.h>
#include <Modloader/app/structs/SharedJsonBuilder__Boxed.h>
#include <Modloader/app/structs/SharedJsonBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SharedJsonBuilder {
        inline app::SharedJsonBuilder__Class** type_info() {
            static app::SharedJsonBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SharedJsonBuilder__Class**)(modloader::win::memory::resolve_rva(0x04738260));
            }
            return cache;
        }
        inline app::SharedJsonBuilder__Class* get_class() {
            return il2cpp::get_class<app::SharedJsonBuilder__Class>(type_info(), "Moon", "SharedJsonBuilder");
        }
        inline app::SharedJsonBuilder* create() {
            return il2cpp::create_object<app::SharedJsonBuilder>(get_class());
        }
        inline app::SharedJsonBuilder__Boxed* box(app::SharedJsonBuilder value) {
            return il2cpp::box_value<app::SharedJsonBuilder__Boxed>(get_class(), value);
        }
    } // namespace SharedJsonBuilder
} // namespace app::classes::types
