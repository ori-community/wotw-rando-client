#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextAnimDistortModifier__Class.h>
#include <Modloader/app/structs/TextAnimDistortModifier.h>

namespace app::classes::types {
    namespace TextAnimDistortModifier {
        namespace {
            inline app::TextAnimDistortModifier__Class* type_info_ref = nullptr;
        }
        inline app::TextAnimDistortModifier__Class** type_info = &type_info_ref;
        inline app::TextAnimDistortModifier__Class* get_class() {
            return il2cpp::get_class<app::TextAnimDistortModifier__Class>(type_info, "", "TextAnimDistortModifier");
        }
        inline app::TextAnimDistortModifier* create() {
            return il2cpp::create_object<app::TextAnimDistortModifier>(get_class());
        }
    } // namespace TextAnimDistortModifier
} // namespace app::classes::types
