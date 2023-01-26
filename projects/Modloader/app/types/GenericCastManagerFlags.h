#pragma once
#include <Modloader/app/structs/GenericCastManagerFlags.h>
#include <Modloader/app/structs/GenericCastManagerFlags__Boxed.h>
#include <Modloader/app/structs/GenericCastManagerFlags__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericCastManagerFlags {
        inline app::GenericCastManagerFlags__Class** type_info() {
            static app::GenericCastManagerFlags__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GenericCastManagerFlags__Class**)(modloader::win::memory::resolve_rva(0x047445C0));
            }
            return cache;
        }
        inline app::GenericCastManagerFlags__Class* get_class() {
            return il2cpp::get_class<app::GenericCastManagerFlags__Class>(type_info(), "", "GenericCastManagerFlags");
        }
        inline app::GenericCastManagerFlags* create() {
            return il2cpp::create_object<app::GenericCastManagerFlags>(get_class());
        }
        inline app::GenericCastManagerFlags__Boxed* box(app::GenericCastManagerFlags value) {
            return il2cpp::box_value<app::GenericCastManagerFlags__Boxed>(get_class(), value);
        }
    } // namespace GenericCastManagerFlags
} // namespace app::classes::types
