#pragma once
#include <Modloader/app/structs/HebrewNumberParsingContext.h>
#include <Modloader/app/structs/HebrewNumberParsingContext__Boxed.h>
#include <Modloader/app/structs/HebrewNumberParsingContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HebrewNumberParsingContext {
        inline app::HebrewNumberParsingContext__Class** type_info() {
            static app::HebrewNumberParsingContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HebrewNumberParsingContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HebrewNumberParsingContext__Class* get_class() {
            return il2cpp::get_class<app::HebrewNumberParsingContext__Class>(type_info(), "System.Globalization", "HebrewNumberParsingContext");
        }
        inline app::HebrewNumberParsingContext* create() {
            return il2cpp::create_object<app::HebrewNumberParsingContext>(get_class());
        }
        inline app::HebrewNumberParsingContext__Boxed* box(app::HebrewNumberParsingContext value) {
            return il2cpp::box_value<app::HebrewNumberParsingContext__Boxed>(get_class(), value);
        }
    } // namespace HebrewNumberParsingContext
} // namespace app::classes::types
