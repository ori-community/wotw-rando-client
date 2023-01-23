#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TranslateModifier__Class.h>
#include <Modloader/app/structs/TranslateModifier.h>

namespace app::classes::types {
    namespace TranslateModifier {
        namespace {
            inline app::TranslateModifier__Class* type_info_ref = nullptr;
        }
        inline app::TranslateModifier__Class** type_info = &type_info_ref;
        inline app::TranslateModifier__Class* get_class() {
            return il2cpp::get_class<app::TranslateModifier__Class>(type_info, "", "TranslateModifier");
        }
        inline app::TranslateModifier* create() {
            return il2cpp::create_object<app::TranslateModifier>(get_class());
        }
    } // namespace TranslateModifier
} // namespace app::classes::types
