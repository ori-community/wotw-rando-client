#pragma once
#include <Modloader/app/structs/Base64FormattingOptions__Enum.h>
#include <Modloader/app/structs/Base64FormattingOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Base64FormattingOptions__Enum {
        inline app::Base64FormattingOptions__Enum__Class** type_info() {
            static app::Base64FormattingOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Base64FormattingOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Base64FormattingOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::Base64FormattingOptions__Enum__Class>(type_info(), "System", "Base64FormattingOptions");
        }
        inline app::Base64FormattingOptions__Enum* create() {
            return il2cpp::create_object<app::Base64FormattingOptions__Enum>(get_class());
        }
    } // namespace Base64FormattingOptions__Enum
} // namespace app::classes::types
