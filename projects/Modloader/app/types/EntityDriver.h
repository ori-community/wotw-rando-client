#pragma once
#include <Modloader/app/structs/EntityDriver.h>
#include <Modloader/app/structs/EntityDriver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityDriver {
        inline app::EntityDriver__Class** type_info() {
            static app::EntityDriver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityDriver__Class**)(modloader::win::memory::resolve_rva(0x04760250));
            }
            return cache;
        }
        inline app::EntityDriver__Class* get_class() {
            return il2cpp::get_class<app::EntityDriver__Class>(type_info(), "", "EntityDriver");
        }
        inline app::EntityDriver* create() {
            return il2cpp::create_object<app::EntityDriver>(get_class());
        }
    } // namespace EntityDriver
} // namespace app::classes::types
