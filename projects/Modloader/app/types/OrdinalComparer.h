#pragma once
#include <Modloader/app/structs/OrdinalComparer.h>
#include <Modloader/app/structs/OrdinalComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrdinalComparer {
        inline app::OrdinalComparer__Class** type_info() {
            static app::OrdinalComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OrdinalComparer__Class**)(modloader::win::memory::resolve_rva(0x04732678));
            }
            return cache;
        }
        inline app::OrdinalComparer__Class* get_class() {
            return il2cpp::get_class<app::OrdinalComparer__Class>(type_info(), "System", "OrdinalComparer");
        }
        inline app::OrdinalComparer* create() {
            return il2cpp::create_object<app::OrdinalComparer>(get_class());
        }
    } // namespace OrdinalComparer
} // namespace app::classes::types
