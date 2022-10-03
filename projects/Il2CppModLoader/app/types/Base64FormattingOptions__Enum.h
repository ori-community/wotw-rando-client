#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Base64FormattingOptions__Enum {
        namespace {
            app::Base64FormattingOptions__Enum__Class* type_info_ref = nullptr;
        }
        app::Base64FormattingOptions__Enum__Class** type_info = &type_info_ref;
        inline app::Base64FormattingOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::Base64FormattingOptions__Enum__Class>(type_info, "System", "Base64FormattingOptions");
        }
        inline app::Base64FormattingOptions__Enum* create() {
            return il2cpp::create_object<app::Base64FormattingOptions__Enum>(get_class());
        }
    } // namespace Base64FormattingOptions__Enum
} // namespace app::classes::types
