#pragma once
#include <Modloader/app/structs/ReferenceConverter.h>
#include <Modloader/app/structs/ReferenceConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReferenceConverter {
        inline app::ReferenceConverter__Class** type_info() {
            static app::ReferenceConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReferenceConverter__Class**)(modloader::win::memory::resolve_rva(0x04792088));
            }
            return cache;
        }
        inline app::ReferenceConverter__Class* get_class() {
            return il2cpp::get_class<app::ReferenceConverter__Class>(type_info(), "System.ComponentModel", "ReferenceConverter");
        }
        inline app::ReferenceConverter* create() {
            return il2cpp::create_object<app::ReferenceConverter>(get_class());
        }
    } // namespace ReferenceConverter
} // namespace app::classes::types
