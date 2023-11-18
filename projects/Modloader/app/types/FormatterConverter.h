#pragma once
#include <Modloader/app/structs/FormatterConverter.h>
#include <Modloader/app/structs/FormatterConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FormatterConverter {
        inline app::FormatterConverter__Class** type_info() {
            static app::FormatterConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FormatterConverter__Class**)(modloader::win::memory::resolve_rva(0x0477C3A8));
            }
            return cache;
        }
        inline app::FormatterConverter__Class* get_class() {
            return il2cpp::get_class<app::FormatterConverter__Class>(type_info(), "System.Runtime.Serialization", "FormatterConverter");
        }
        inline app::FormatterConverter* create() {
            return il2cpp::create_object<app::FormatterConverter>(get_class());
        }
    } // namespace FormatterConverter
} // namespace app::classes::types
