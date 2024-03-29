#pragma once
#include <Modloader/app/structs/FormattableStringFactory_ConcreteFormattableString.h>
#include <Modloader/app/structs/FormattableStringFactory_ConcreteFormattableString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FormattableStringFactory_ConcreteFormattableString {
        inline app::FormattableStringFactory_ConcreteFormattableString__Class** type_info() {
            static app::FormattableStringFactory_ConcreteFormattableString__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FormattableStringFactory_ConcreteFormattableString__Class**)(modloader::win::memory::resolve_rva(0x04791410));
            }
            return cache;
        }
        inline app::FormattableStringFactory_ConcreteFormattableString__Class* get_class() {
            return il2cpp::get_nested_class<app::FormattableStringFactory_ConcreteFormattableString__Class>(type_info(), "System.Runtime.CompilerServices", "FormattableStringFactory", "ConcreteFormattableString");
        }
        inline app::FormattableStringFactory_ConcreteFormattableString* create() {
            return il2cpp::create_object<app::FormattableStringFactory_ConcreteFormattableString>(get_class());
        }
    } // namespace FormattableStringFactory_ConcreteFormattableString
} // namespace app::classes::types
