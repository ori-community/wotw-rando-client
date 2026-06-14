#pragma once
#include <Modloader/app/structs/FormatterTypeStyle__Enum.h>
#include <Modloader/app/structs/FormatterTypeStyle__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FormatterTypeStyle__Enum {
        inline app::FormatterTypeStyle__Enum__Class** type_info() {
            static app::FormatterTypeStyle__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FormatterTypeStyle__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FormatterTypeStyle__Enum__Class* get_class() {
            return il2cpp::get_class<app::FormatterTypeStyle__Enum__Class>(type_info(), "System.Runtime.Serialization.Formatters", "FormatterTypeStyle");
        }
        inline app::FormatterTypeStyle__Enum* create() {
            return il2cpp::create_object<app::FormatterTypeStyle__Enum>(get_class());
        }
    } // namespace FormatterTypeStyle__Enum
} // namespace app::classes::types
