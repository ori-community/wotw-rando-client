#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MultiplyLayerExtraModifier__Class.h>
#include <Modloader/app/structs/MultiplyLayerExtraModifier.h>

namespace app::classes::types {
    namespace MultiplyLayerExtraModifier {
        namespace {
            inline app::MultiplyLayerExtraModifier__Class* type_info_ref = nullptr;
        }
        inline app::MultiplyLayerExtraModifier__Class** type_info = &type_info_ref;
        inline app::MultiplyLayerExtraModifier__Class* get_class() {
            return il2cpp::get_class<app::MultiplyLayerExtraModifier__Class>(type_info, "", "MultiplyLayerExtraModifier");
        }
        inline app::MultiplyLayerExtraModifier* create() {
            return il2cpp::create_object<app::MultiplyLayerExtraModifier>(get_class());
        }
    } // namespace MultiplyLayerExtraModifier
} // namespace app::classes::types
