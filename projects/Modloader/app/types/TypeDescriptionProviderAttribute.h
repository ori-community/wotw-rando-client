#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TypeDescriptionProviderAttribute__Class.h>
#include <Modloader/app/structs/TypeDescriptionProviderAttribute.h>

namespace app::classes::types {
    namespace TypeDescriptionProviderAttribute {
        inline app::TypeDescriptionProviderAttribute__Class** type_info = (app::TypeDescriptionProviderAttribute__Class**)(modloader::win::memory::resolve_rva(0x0474A740));
        inline app::TypeDescriptionProviderAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeDescriptionProviderAttribute__Class>(type_info, "System.ComponentModel", "TypeDescriptionProviderAttribute");
        }
        inline app::TypeDescriptionProviderAttribute* create() {
            return il2cpp::create_object<app::TypeDescriptionProviderAttribute>(get_class());
        }
    } // namespace TypeDescriptionProviderAttribute
} // namespace app::classes::types
