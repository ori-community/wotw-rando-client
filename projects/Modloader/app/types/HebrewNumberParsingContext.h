#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HebrewNumberParsingContext {
        namespace {
            inline app::HebrewNumberParsingContext__Class* type_info_ref = nullptr;
        }
        inline app::HebrewNumberParsingContext__Class** type_info = &type_info_ref;
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
