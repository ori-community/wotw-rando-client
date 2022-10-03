#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BEAUTIFY_QUALITY__Enum {
        namespace {
            app::BEAUTIFY_QUALITY__Enum__Class* type_info_ref = nullptr;
        }
        app::BEAUTIFY_QUALITY__Enum__Class** type_info = &type_info_ref;
        inline app::BEAUTIFY_QUALITY__Enum__Class* get_class() {
            return il2cpp::get_class<app::BEAUTIFY_QUALITY__Enum__Class>(type_info, "BeautifyEffect", "BEAUTIFY_QUALITY");
        }
        inline app::BEAUTIFY_QUALITY__Enum* create() {
            return il2cpp::create_object<app::BEAUTIFY_QUALITY__Enum>(get_class());
        }
    } // namespace BEAUTIFY_QUALITY__Enum
} // namespace app::classes::types
