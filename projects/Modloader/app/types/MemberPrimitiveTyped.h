#pragma once
#include <Modloader/app/structs/MemberPrimitiveTyped.h>
#include <Modloader/app/structs/MemberPrimitiveTyped__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemberPrimitiveTyped {
        inline app::MemberPrimitiveTyped__Class** type_info() {
            static app::MemberPrimitiveTyped__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemberPrimitiveTyped__Class**)(modloader::win::memory::resolve_rva(0x04732180));
            }
            return cache;
        }
        inline app::MemberPrimitiveTyped__Class* get_class() {
            return il2cpp::get_class<app::MemberPrimitiveTyped__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveTyped");
        }
        inline app::MemberPrimitiveTyped* create() {
            return il2cpp::create_object<app::MemberPrimitiveTyped>(get_class());
        }
    } // namespace MemberPrimitiveTyped
} // namespace app::classes::types
