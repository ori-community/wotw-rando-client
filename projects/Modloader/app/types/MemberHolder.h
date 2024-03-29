#pragma once
#include <Modloader/app/structs/MemberHolder.h>
#include <Modloader/app/structs/MemberHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemberHolder {
        inline app::MemberHolder__Class** type_info() {
            static app::MemberHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemberHolder__Class**)(modloader::win::memory::resolve_rva(0x04782D60));
            }
            return cache;
        }
        inline app::MemberHolder__Class* get_class() {
            return il2cpp::get_class<app::MemberHolder__Class>(type_info(), "System.Runtime.Serialization", "MemberHolder");
        }
        inline app::MemberHolder* create() {
            return il2cpp::create_object<app::MemberHolder>(get_class());
        }
    } // namespace MemberHolder
} // namespace app::classes::types
