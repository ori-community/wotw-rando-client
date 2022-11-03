#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DepthPrecullModifier {
        namespace {
            inline app::DepthPrecullModifier__Class* type_info_ref = nullptr;
        }
        inline app::DepthPrecullModifier__Class** type_info = &type_info_ref;
        inline app::DepthPrecullModifier__Class* get_class() {
            return il2cpp::get_class<app::DepthPrecullModifier__Class>(type_info, "", "DepthPrecullModifier");
        }
        inline app::DepthPrecullModifier* create() {
            return il2cpp::create_object<app::DepthPrecullModifier>(get_class());
        }
    } // namespace DepthPrecullModifier
} // namespace app::classes::types
