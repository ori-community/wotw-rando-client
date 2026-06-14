#pragma once
#include <Modloader/app/structs/MemberDescriptor.h>
#include <Modloader/app/structs/MemberDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemberDescriptor {
        inline app::MemberDescriptor__Class** type_info() {
            static app::MemberDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemberDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04774F78));
            }
            return cache;
        }
        inline app::MemberDescriptor__Class* get_class() {
            return il2cpp::get_class<app::MemberDescriptor__Class>(type_info(), "System.ComponentModel", "MemberDescriptor");
        }
        inline app::MemberDescriptor* create() {
            return il2cpp::create_object<app::MemberDescriptor>(get_class());
        }
    } // namespace MemberDescriptor
} // namespace app::classes::types
