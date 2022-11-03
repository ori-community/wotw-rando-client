#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IEventSystemHandler__Array {
        namespace {
            inline app::IEventSystemHandler__Array__Class* type_info_ref = nullptr;
        }
        inline app::IEventSystemHandler__Array__Class** type_info = &type_info_ref;
        inline app::IEventSystemHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::IEventSystemHandler__Array__Class>(type_info, "UnityEngine.EventSystems", "IEventSystemHandler[]");
        }
        inline app::IEventSystemHandler__Array* create() {
            return il2cpp::create_object<app::IEventSystemHandler__Array>(get_class());
        }
    } // namespace IEventSystemHandler__Array
} // namespace app::classes::types
