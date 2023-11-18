#pragma once
#include <Modloader/app/structs/InternalObjectTypeE__Enum.h>
#include <Modloader/app/structs/InternalObjectTypeE__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalObjectTypeE__Enum {
        inline app::InternalObjectTypeE__Enum__Class** type_info() {
            static app::InternalObjectTypeE__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InternalObjectTypeE__Enum__Class**)(modloader::win::memory::resolve_rva(0x04702FB0));
            }
            return cache;
        }
        inline app::InternalObjectTypeE__Enum__Class* get_class() {
            return il2cpp::get_class<app::InternalObjectTypeE__Enum__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "InternalObjectTypeE");
        }
        inline app::InternalObjectTypeE__Enum* create() {
            return il2cpp::create_object<app::InternalObjectTypeE__Enum>(get_class());
        }
    } // namespace InternalObjectTypeE__Enum
} // namespace app::classes::types
