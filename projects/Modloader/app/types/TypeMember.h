#pragma once
#include <Modloader/app/structs/TypeMember.h>
#include <Modloader/app/structs/TypeMember__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeMember {
        inline app::TypeMember__Class** type_info() {
            static app::TypeMember__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeMember__Class**)(modloader::win::memory::resolve_rva(0x04742728));
            }
            return cache;
        }
        inline app::TypeMember__Class* get_class() {
            return il2cpp::get_class<app::TypeMember__Class>(type_info(), "System.Xml.Serialization", "TypeMember");
        }
        inline app::TypeMember* create() {
            return il2cpp::create_object<app::TypeMember>(get_class());
        }
    } // namespace TypeMember
} // namespace app::classes::types
