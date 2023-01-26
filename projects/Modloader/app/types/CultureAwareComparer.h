#pragma once
#include <Modloader/app/structs/CultureAwareComparer.h>
#include <Modloader/app/structs/CultureAwareComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CultureAwareComparer {
        inline app::CultureAwareComparer__Class** type_info() {
            static app::CultureAwareComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CultureAwareComparer__Class**)(modloader::win::memory::resolve_rva(0x047193D0));
            }
            return cache;
        }
        inline app::CultureAwareComparer__Class* get_class() {
            return il2cpp::get_class<app::CultureAwareComparer__Class>(type_info(), "System", "CultureAwareComparer");
        }
        inline app::CultureAwareComparer* create() {
            return il2cpp::create_object<app::CultureAwareComparer>(get_class());
        }
    } // namespace CultureAwareComparer
} // namespace app::classes::types
