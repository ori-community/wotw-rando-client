#pragma once
#include <Modloader/app/structs/FormatterData.h>
#include <Modloader/app/structs/FormatterData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FormatterData {
        inline app::FormatterData__Class** type_info() {
            static app::FormatterData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FormatterData__Class**)(modloader::win::memory::resolve_rva(0x04745260));
            }
            return cache;
        }
        inline app::FormatterData__Class* get_class() {
            return il2cpp::get_class<app::FormatterData__Class>(type_info(), "System.Runtime.Remoting", "FormatterData");
        }
        inline app::FormatterData* create() {
            return il2cpp::create_object<app::FormatterData>(get_class());
        }
    } // namespace FormatterData
} // namespace app::classes::types
