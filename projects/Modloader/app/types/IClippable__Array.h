#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IClippable__Array__Class.h>
#include <Modloader/app/structs/IClippable__Array.h>

namespace app::classes::types {
    namespace IClippable__Array {
        namespace {
            inline app::IClippable__Array__Class* type_info_ref = nullptr;
        }
        inline app::IClippable__Array__Class** type_info = &type_info_ref;
        inline app::IClippable__Array__Class* get_class() {
            return il2cpp::get_class<app::IClippable__Array__Class>(type_info, "UnityEngine.UI", "IClippable[]");
        }
        inline app::IClippable__Array* create() {
            return il2cpp::create_object<app::IClippable__Array>(get_class());
        }
    } // namespace IClippable__Array
} // namespace app::classes::types
