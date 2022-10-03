#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HebrewNumberParsingContext {
        namespace {
            app::HebrewNumberParsingContext__Class* type_info_ref = nullptr;
        }
        app::HebrewNumberParsingContext__Class** type_info = &type_info_ref;
        inline app::HebrewNumberParsingContext__Class* get_class() {
            return il2cpp::get_class<app::HebrewNumberParsingContext__Class>(type_info, "System.Globalization", "HebrewNumberParsingContext");
        }
        inline app::HebrewNumberParsingContext* create() {
            return il2cpp::create_object<app::HebrewNumberParsingContext>(get_class());
        }
        inline app::HebrewNumberParsingContext__Boxed* box(app::HebrewNumberParsingContext value) {
            return il2cpp::box_value<app::HebrewNumberParsingContext__Boxed>(get_class(), value);
        }
    } // namespace HebrewNumberParsingContext
} // namespace app::classes::types
