#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AdditiveLayerExtraModifier__Class.h>
#include <Modloader/app/structs/AdditiveLayerExtraModifier.h>

namespace app::classes::types {
    namespace AdditiveLayerExtraModifier {
        namespace {
            inline app::AdditiveLayerExtraModifier__Class* type_info_ref = nullptr;
        }
        inline app::AdditiveLayerExtraModifier__Class** type_info = &type_info_ref;
        inline app::AdditiveLayerExtraModifier__Class* get_class() {
            return il2cpp::get_class<app::AdditiveLayerExtraModifier__Class>(type_info, "", "AdditiveLayerExtraModifier");
        }
        inline app::AdditiveLayerExtraModifier* create() {
            return il2cpp::create_object<app::AdditiveLayerExtraModifier>(get_class());
        }
    } // namespace AdditiveLayerExtraModifier
} // namespace app::classes::types
