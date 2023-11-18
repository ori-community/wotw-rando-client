#pragma once
#include <Modloader/app/structs/SketchupGroup.h>
#include <Modloader/app/structs/SketchupGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SketchupGroup {
        inline app::SketchupGroup__Class** type_info() {
            static app::SketchupGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SketchupGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SketchupGroup__Class* get_class() {
            return il2cpp::get_class<app::SketchupGroup__Class>(type_info(), "", "SketchupGroup");
        }
        inline app::SketchupGroup* create() {
            return il2cpp::create_object<app::SketchupGroup>(get_class());
        }
    } // namespace SketchupGroup
} // namespace app::classes::types
