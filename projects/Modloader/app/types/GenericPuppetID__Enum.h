#pragma once
#include <Modloader/app/structs/GenericPuppetID__Enum.h>
#include <Modloader/app/structs/GenericPuppetID__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericPuppetID__Enum {
        inline app::GenericPuppetID__Enum__Class** type_info() {
            static app::GenericPuppetID__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericPuppetID__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericPuppetID__Enum__Class* get_class() {
            return il2cpp::get_class<app::GenericPuppetID__Enum__Class>(type_info(), "", "GenericPuppetID");
        }
        inline app::GenericPuppetID__Enum* create() {
            return il2cpp::create_object<app::GenericPuppetID__Enum>(get_class());
        }
    } // namespace GenericPuppetID__Enum
} // namespace app::classes::types
