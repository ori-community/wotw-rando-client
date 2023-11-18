#pragma once
#include <Modloader/app/structs/ByteEqualityComparer.h>
#include <Modloader/app/structs/ByteEqualityComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ByteEqualityComparer {
        inline app::ByteEqualityComparer__Class** type_info() {
            static app::ByteEqualityComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ByteEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x0470B558));
            }
            return cache;
        }
        inline app::ByteEqualityComparer__Class* get_class() {
            return il2cpp::get_class<app::ByteEqualityComparer__Class>(type_info(), "System.Collections.Generic", "ByteEqualityComparer");
        }
        inline app::ByteEqualityComparer* create() {
            return il2cpp::create_object<app::ByteEqualityComparer>(get_class());
        }
    } // namespace ByteEqualityComparer
} // namespace app::classes::types
