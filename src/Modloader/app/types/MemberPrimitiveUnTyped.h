#pragma once
#include <Modloader/app/structs/MemberPrimitiveUnTyped.h>
#include <Modloader/app/structs/MemberPrimitiveUnTyped__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemberPrimitiveUnTyped {
        inline app::MemberPrimitiveUnTyped__Class** type_info() {
            static app::MemberPrimitiveUnTyped__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemberPrimitiveUnTyped__Class**)(modloader::win::memory::resolve_rva(0x0475CF68));
            }
            return cache;
        }
        inline app::MemberPrimitiveUnTyped__Class* get_class() {
            return il2cpp::get_class<app::MemberPrimitiveUnTyped__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveUnTyped");
        }
        inline app::MemberPrimitiveUnTyped* create() {
            return il2cpp::create_object<app::MemberPrimitiveUnTyped>(get_class());
        }
    } // namespace MemberPrimitiveUnTyped
} // namespace app::classes::types
