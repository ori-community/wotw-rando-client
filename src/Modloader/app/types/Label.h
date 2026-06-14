#pragma once
#include <Modloader/app/structs/Label.h>
#include <Modloader/app/structs/Label__Boxed.h>
#include <Modloader/app/structs/Label__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Label {
        inline app::Label__Class** type_info() {
            static app::Label__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Label__Class**)(modloader::win::memory::resolve_rva(0x0477F998));
            }
            return cache;
        }
        inline app::Label__Class* get_class() {
            return il2cpp::get_class<app::Label__Class>(type_info(), "System.Reflection.Emit", "Label");
        }
        inline app::Label* create() {
            return il2cpp::create_object<app::Label>(get_class());
        }
        inline app::Label__Boxed* box(app::Label value) {
            return il2cpp::box_value<app::Label__Boxed>(get_class(), value);
        }
    } // namespace Label
} // namespace app::classes::types
