#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KnownTypeAttribute__Class.h>
#include <Modloader/app/structs/KnownTypeAttribute.h>

namespace app::classes::types {
    namespace KnownTypeAttribute {
        namespace {
            inline app::KnownTypeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::KnownTypeAttribute__Class** type_info = &type_info_ref;
        inline app::KnownTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::KnownTypeAttribute__Class>(type_info, "System.Runtime.Serialization", "KnownTypeAttribute");
        }
        inline app::KnownTypeAttribute* create() {
            return il2cpp::create_object<app::KnownTypeAttribute>(get_class());
        }
    } // namespace KnownTypeAttribute
} // namespace app::classes::types
