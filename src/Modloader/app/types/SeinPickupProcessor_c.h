#pragma once
#include <Modloader/app/structs/SeinPickupProcessor_c.h>
#include <Modloader/app/structs/SeinPickupProcessor_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPickupProcessor_c {
        inline app::SeinPickupProcessor_c__Class** type_info() {
            static app::SeinPickupProcessor_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinPickupProcessor_c__Class**)(modloader::win::memory::resolve_rva(0x04780A10));
            }
            return cache;
        }
        inline app::SeinPickupProcessor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinPickupProcessor_c__Class>(type_info(), "", "SeinPickupProcessor", "<>c");
        }
        inline app::SeinPickupProcessor_c* create() {
            return il2cpp::create_object<app::SeinPickupProcessor_c>(get_class());
        }
    } // namespace SeinPickupProcessor_c
} // namespace app::classes::types
