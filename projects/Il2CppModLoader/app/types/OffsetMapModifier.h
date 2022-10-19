#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OffsetMapModifier {
        namespace {
            inline app::OffsetMapModifier__Class* type_info_ref = nullptr;
        }
        inline app::OffsetMapModifier__Class** type_info = &type_info_ref;
        inline app::OffsetMapModifier__Class* get_class() {
            return il2cpp::get_class<app::OffsetMapModifier__Class>(type_info, "", "OffsetMapModifier");
        }
        inline app::OffsetMapModifier* create() {
            return il2cpp::create_object<app::OffsetMapModifier>(get_class());
        }
    } // namespace OffsetMapModifier
} // namespace app::classes::types
