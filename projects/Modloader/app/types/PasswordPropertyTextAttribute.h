#pragma once
#include <Modloader/app/structs/PasswordPropertyTextAttribute.h>
#include <Modloader/app/structs/PasswordPropertyTextAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PasswordPropertyTextAttribute {
        inline app::PasswordPropertyTextAttribute__Class** type_info() {
            static app::PasswordPropertyTextAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PasswordPropertyTextAttribute__Class**)(modloader::win::memory::resolve_rva(0x04716CA0));
            }
            return cache;
        }
        inline app::PasswordPropertyTextAttribute__Class* get_class() {
            return il2cpp::get_class<app::PasswordPropertyTextAttribute__Class>(type_info(), "System.ComponentModel", "PasswordPropertyTextAttribute");
        }
        inline app::PasswordPropertyTextAttribute* create() {
            return il2cpp::create_object<app::PasswordPropertyTextAttribute>(get_class());
        }
    } // namespace PasswordPropertyTextAttribute
} // namespace app::classes::types
