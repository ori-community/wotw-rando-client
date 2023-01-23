#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExcludeFromObjectFactoryAttribute__Class.h>
#include <Modloader/app/structs/ExcludeFromObjectFactoryAttribute.h>

namespace app::classes::types {
    namespace ExcludeFromObjectFactoryAttribute {
        namespace {
            inline app::ExcludeFromObjectFactoryAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ExcludeFromObjectFactoryAttribute__Class** type_info = &type_info_ref;
        inline app::ExcludeFromObjectFactoryAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExcludeFromObjectFactoryAttribute__Class>(type_info, "UnityEngine", "ExcludeFromObjectFactoryAttribute");
        }
        inline app::ExcludeFromObjectFactoryAttribute* create() {
            return il2cpp::create_object<app::ExcludeFromObjectFactoryAttribute>(get_class());
        }
    } // namespace ExcludeFromObjectFactoryAttribute
} // namespace app::classes::types
