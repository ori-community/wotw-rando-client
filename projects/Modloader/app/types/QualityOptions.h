#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/QualityOptions__Class.h>
#include <Modloader/app/structs/QualityOptions.h>

namespace app::classes::types {
    namespace QualityOptions {
        namespace {
            inline app::QualityOptions__Class* type_info_ref = nullptr;
        }
        inline app::QualityOptions__Class** type_info = &type_info_ref;
        inline app::QualityOptions__Class* get_class() {
            return il2cpp::get_class<app::QualityOptions__Class>(type_info, "TriangleNet.Meshing", "QualityOptions");
        }
        inline app::QualityOptions* create() {
            return il2cpp::create_object<app::QualityOptions>(get_class());
        }
    } // namespace QualityOptions
} // namespace app::classes::types
