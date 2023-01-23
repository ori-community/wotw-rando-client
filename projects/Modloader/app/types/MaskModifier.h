#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MaskModifier__Class.h>
#include <Modloader/app/structs/MaskModifier.h>

namespace app::classes::types {
    namespace MaskModifier {
        namespace {
            inline app::MaskModifier__Class* type_info_ref = nullptr;
        }
        inline app::MaskModifier__Class** type_info = &type_info_ref;
        inline app::MaskModifier__Class* get_class() {
            return il2cpp::get_class<app::MaskModifier__Class>(type_info, "", "MaskModifier");
        }
        inline app::MaskModifier* create() {
            return il2cpp::create_object<app::MaskModifier>(get_class());
        }
    } // namespace MaskModifier
} // namespace app::classes::types
