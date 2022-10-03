#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NormalizationForm__Enum {
        namespace {
            app::NormalizationForm__Enum__Class* type_info_ref = nullptr;
        }
        app::NormalizationForm__Enum__Class** type_info = &type_info_ref;
        inline app::NormalizationForm__Enum__Class* get_class() {
            return il2cpp::get_class<app::NormalizationForm__Enum__Class>(type_info, "System.Text", "NormalizationForm");
        }
        inline app::NormalizationForm__Enum* create() {
            return il2cpp::create_object<app::NormalizationForm__Enum>(get_class());
        }
    } // namespace NormalizationForm__Enum
} // namespace app::classes::types
