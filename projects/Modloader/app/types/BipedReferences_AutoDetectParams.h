#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BipedReferences_AutoDetectParams__Class.h>
#include <Modloader/app/structs/BipedReferences_AutoDetectParams.h>
#include <Modloader/app/structs/BipedReferences_AutoDetectParams__Boxed.h>

namespace app::classes::types {
    namespace BipedReferences_AutoDetectParams {
        namespace {
            inline app::BipedReferences_AutoDetectParams__Class* type_info_ref = nullptr;
        }
        inline app::BipedReferences_AutoDetectParams__Class** type_info = &type_info_ref;
        inline app::BipedReferences_AutoDetectParams__Class* get_class() {
            return il2cpp::get_nested_class<app::BipedReferences_AutoDetectParams__Class>(type_info, "RootMotion", "BipedReferences", "AutoDetectParams");
        }
        inline app::BipedReferences_AutoDetectParams* create() {
            return il2cpp::create_object<app::BipedReferences_AutoDetectParams>(get_class());
        }
        inline app::BipedReferences_AutoDetectParams__Boxed* box(app::BipedReferences_AutoDetectParams value) {
            return il2cpp::box_value<app::BipedReferences_AutoDetectParams__Boxed>(get_class(), value);
        }
    } // namespace BipedReferences_AutoDetectParams
} // namespace app::classes::types
