#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ImmutableObjectAttribute__Class.h>
#include <Modloader/app/structs/ImmutableObjectAttribute.h>

namespace app::classes::types {
    namespace ImmutableObjectAttribute {
        inline app::ImmutableObjectAttribute__Class** type_info = (app::ImmutableObjectAttribute__Class**)(modloader::win::memory::resolve_rva(0x047199E8));
        inline app::ImmutableObjectAttribute__Class* get_class() {
            return il2cpp::get_class<app::ImmutableObjectAttribute__Class>(type_info, "System.ComponentModel", "ImmutableObjectAttribute");
        }
        inline app::ImmutableObjectAttribute* create() {
            return il2cpp::create_object<app::ImmutableObjectAttribute>(get_class());
        }
    } // namespace ImmutableObjectAttribute
} // namespace app::classes::types
