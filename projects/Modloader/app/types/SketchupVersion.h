#pragma once
#include <Modloader/app/structs/SketchupVersion.h>
#include <Modloader/app/structs/SketchupVersion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SketchupVersion {
        inline app::SketchupVersion__Class** type_info() {
            static app::SketchupVersion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SketchupVersion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SketchupVersion__Class* get_class() {
            return il2cpp::get_class<app::SketchupVersion__Class>(type_info(), "", "SketchupVersion");
        }
        inline app::SketchupVersion* create() {
            return il2cpp::create_object<app::SketchupVersion>(get_class());
        }
    } // namespace SketchupVersion
} // namespace app::classes::types
