#pragma once
#include <Modloader/app/structs/DefaultValueAttribute.h>
#include <Modloader/app/structs/DefaultValueAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultValueAttribute {
        inline app::DefaultValueAttribute__Class** type_info() {
            static app::DefaultValueAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultValueAttribute__Class**)(modloader::win::memory::resolve_rva(0x04769598));
            }
            return cache;
        }
        inline app::DefaultValueAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultValueAttribute__Class>(type_info(), "System.ComponentModel", "DefaultValueAttribute");
        }
        inline app::DefaultValueAttribute* create() {
            return il2cpp::create_object<app::DefaultValueAttribute>(get_class());
        }
    } // namespace DefaultValueAttribute
} // namespace app::classes::types
