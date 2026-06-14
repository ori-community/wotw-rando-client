#pragma once
#include <Modloader/app/structs/MemberSerialization__Enum.h>
#include <Modloader/app/structs/MemberSerialization__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemberSerialization__Enum {
        inline app::MemberSerialization__Enum__Class** type_info() {
            static app::MemberSerialization__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MemberSerialization__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MemberSerialization__Enum__Class* get_class() {
            return il2cpp::get_class<app::MemberSerialization__Enum__Class>(type_info(), "Newtonsoft.Json", "MemberSerialization");
        }
        inline app::MemberSerialization__Enum* create() {
            return il2cpp::create_object<app::MemberSerialization__Enum>(get_class());
        }
    } // namespace MemberSerialization__Enum
} // namespace app::classes::types
