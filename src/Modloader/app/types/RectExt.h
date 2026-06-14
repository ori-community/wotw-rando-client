#pragma once
#include <Modloader/app/structs/RectExt.h>
#include <Modloader/app/structs/RectExt__Boxed.h>
#include <Modloader/app/structs/RectExt__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RectExt {
        inline app::RectExt__Class** type_info() {
            static app::RectExt__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RectExt__Class**)(modloader::win::memory::resolve_rva(0x0477F460));
            }
            return cache;
        }
        inline app::RectExt__Class* get_class() {
            return il2cpp::get_class<app::RectExt__Class>(type_info(), "Swing", "RectExt");
        }
        inline app::RectExt* create() {
            return il2cpp::create_object<app::RectExt>(get_class());
        }
        inline app::RectExt__Boxed* box(app::RectExt value) {
            return il2cpp::box_value<app::RectExt__Boxed>(get_class(), value);
        }
    } // namespace RectExt
} // namespace app::classes::types
