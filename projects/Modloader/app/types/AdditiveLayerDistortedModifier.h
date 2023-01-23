#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AdditiveLayerDistortedModifier__Class.h>
#include <Modloader/app/structs/AdditiveLayerDistortedModifier.h>

namespace app::classes::types {
    namespace AdditiveLayerDistortedModifier {
        namespace {
            inline app::AdditiveLayerDistortedModifier__Class* type_info_ref = nullptr;
        }
        inline app::AdditiveLayerDistortedModifier__Class** type_info = &type_info_ref;
        inline app::AdditiveLayerDistortedModifier__Class* get_class() {
            return il2cpp::get_class<app::AdditiveLayerDistortedModifier__Class>(type_info, "", "AdditiveLayerDistortedModifier");
        }
        inline app::AdditiveLayerDistortedModifier* create() {
            return il2cpp::create_object<app::AdditiveLayerDistortedModifier>(get_class());
        }
    } // namespace AdditiveLayerDistortedModifier
} // namespace app::classes::types
