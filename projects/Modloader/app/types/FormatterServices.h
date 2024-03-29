#pragma once
#include <Modloader/app/structs/FormatterServices.h>
#include <Modloader/app/structs/FormatterServices__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FormatterServices {
        inline app::FormatterServices__Class** type_info() {
            static app::FormatterServices__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FormatterServices__Class**)(modloader::win::memory::resolve_rva(0x04738670));
            }
            return cache;
        }
        inline app::FormatterServices__Class* get_class() {
            return il2cpp::get_class<app::FormatterServices__Class>(type_info(), "System.Runtime.Serialization", "FormatterServices");
        }
        inline app::FormatterServices* create() {
            return il2cpp::create_object<app::FormatterServices>(get_class());
        }
    } // namespace FormatterServices
} // namespace app::classes::types
