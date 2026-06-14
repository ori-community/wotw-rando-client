#pragma once
#include <Modloader/app/structs/MemberTypes__Enum.h>
#include <Modloader/app/structs/MemberTypes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemberTypes__Enum {
        inline app::MemberTypes__Enum__Class** type_info() {
            static app::MemberTypes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemberTypes__Enum__Class**)(modloader::win::memory::resolve_rva(0x047328F8));
            }
            return cache;
        }
        inline app::MemberTypes__Enum__Class* get_class() {
            return il2cpp::get_class<app::MemberTypes__Enum__Class>(type_info(), "System.Reflection", "MemberTypes");
        }
        inline app::MemberTypes__Enum* create() {
            return il2cpp::create_object<app::MemberTypes__Enum>(get_class());
        }
    } // namespace MemberTypes__Enum
} // namespace app::classes::types
