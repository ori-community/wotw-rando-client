#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FilteredRandomRange {
        namespace {
            app::FilteredRandomRange__Class* type_info_ref = nullptr;
        }
        app::FilteredRandomRange__Class** type_info = &type_info_ref;
        inline app::FilteredRandomRange__Class* get_class() {
            return il2cpp::get_class<app::FilteredRandomRange__Class>(type_info, "Moon", "FilteredRandomRange");
        }
        inline app::FilteredRandomRange* create() {
            return il2cpp::create_object<app::FilteredRandomRange>(get_class());
        }
    } // namespace FilteredRandomRange
} // namespace app::classes::types
