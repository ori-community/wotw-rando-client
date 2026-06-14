#pragma once
#include <Modloader/app/structs/ByteUberStateCondition.h>
#include <Modloader/app/structs/ByteUberStateCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ByteUberStateCondition {
        inline app::ByteUberStateCondition__Class** type_info() {
            static app::ByteUberStateCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ByteUberStateCondition__Class**)(modloader::win::memory::resolve_rva(0x0471DA48));
            }
            return cache;
        }
        inline app::ByteUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::ByteUberStateCondition__Class>(type_info(), "", "ByteUberStateCondition");
        }
        inline app::ByteUberStateCondition* create() {
            return il2cpp::create_object<app::ByteUberStateCondition>(get_class());
        }
    } // namespace ByteUberStateCondition
} // namespace app::classes::types
