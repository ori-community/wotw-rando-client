#pragma once
#include <Modloader/app/structs/DelegateSerializationHolder.h>
#include <Modloader/app/structs/DelegateSerializationHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DelegateSerializationHolder {
        inline app::DelegateSerializationHolder__Class** type_info() {
            static app::DelegateSerializationHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DelegateSerializationHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DelegateSerializationHolder__Class* get_class() {
            return il2cpp::get_class<app::DelegateSerializationHolder__Class>(type_info(), "System", "DelegateSerializationHolder");
        }
        inline app::DelegateSerializationHolder* create() {
            return il2cpp::create_object<app::DelegateSerializationHolder>(get_class());
        }
    } // namespace DelegateSerializationHolder
} // namespace app::classes::types
