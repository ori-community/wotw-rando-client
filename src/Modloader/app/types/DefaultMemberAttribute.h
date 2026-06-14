#pragma once
#include <Modloader/app/structs/DefaultMemberAttribute.h>
#include <Modloader/app/structs/DefaultMemberAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultMemberAttribute {
        inline app::DefaultMemberAttribute__Class** type_info() {
            static app::DefaultMemberAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultMemberAttribute__Class**)(modloader::win::memory::resolve_rva(0x0473C608));
            }
            return cache;
        }
        inline app::DefaultMemberAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultMemberAttribute__Class>(type_info(), "System.Reflection", "DefaultMemberAttribute");
        }
        inline app::DefaultMemberAttribute* create() {
            return il2cpp::create_object<app::DefaultMemberAttribute>(get_class());
        }
    } // namespace DefaultMemberAttribute
} // namespace app::classes::types
