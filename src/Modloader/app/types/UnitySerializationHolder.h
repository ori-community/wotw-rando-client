#pragma once
#include <Modloader/app/structs/UnitySerializationHolder.h>
#include <Modloader/app/structs/UnitySerializationHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnitySerializationHolder {
        inline app::UnitySerializationHolder__Class** type_info() {
            static app::UnitySerializationHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnitySerializationHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnitySerializationHolder__Class* get_class() {
            return il2cpp::get_class<app::UnitySerializationHolder__Class>(type_info(), "System", "UnitySerializationHolder");
        }
        inline app::UnitySerializationHolder* create() {
            return il2cpp::create_object<app::UnitySerializationHolder>(get_class());
        }
    } // namespace UnitySerializationHolder
} // namespace app::classes::types
