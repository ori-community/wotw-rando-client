#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SketchupVersion {
        namespace {
            inline app::SketchupVersion__Class* type_info_ref = nullptr;
        }
        inline app::SketchupVersion__Class** type_info = &type_info_ref;
        inline app::SketchupVersion__Class* get_class() {
            return il2cpp::get_class<app::SketchupVersion__Class>(type_info, "", "SketchupVersion");
        }
        inline app::SketchupVersion* create() {
            return il2cpp::create_object<app::SketchupVersion>(get_class());
        }
    } // namespace SketchupVersion
} // namespace app::classes::types
