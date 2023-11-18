#pragma once
#include <Modloader/app/structs/MemberInfoSerializationHolder.h>
#include <Modloader/app/structs/MemberInfoSerializationHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemberInfoSerializationHolder {
        inline app::MemberInfoSerializationHolder__Class** type_info() {
            static app::MemberInfoSerializationHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MemberInfoSerializationHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MemberInfoSerializationHolder__Class* get_class() {
            return il2cpp::get_class<app::MemberInfoSerializationHolder__Class>(type_info(), "System.Reflection", "MemberInfoSerializationHolder");
        }
        inline app::MemberInfoSerializationHolder* create() {
            return il2cpp::create_object<app::MemberInfoSerializationHolder>(get_class());
        }
    } // namespace MemberInfoSerializationHolder
} // namespace app::classes::types
