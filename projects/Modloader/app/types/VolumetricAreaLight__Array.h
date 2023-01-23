#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VolumetricAreaLight__Array__Class.h>
#include <Modloader/app/structs/VolumetricAreaLight__Array.h>

namespace app::classes::types {
    namespace VolumetricAreaLight__Array {
        namespace {
            inline app::VolumetricAreaLight__Array__Class* type_info_ref = nullptr;
        }
        inline app::VolumetricAreaLight__Array__Class** type_info = &type_info_ref;
        inline app::VolumetricAreaLight__Array__Class* get_class() {
            return il2cpp::get_class<app::VolumetricAreaLight__Array__Class>(type_info, "Moon.Rendering", "VolumetricAreaLight[]");
        }
        inline app::VolumetricAreaLight__Array* create() {
            return il2cpp::create_object<app::VolumetricAreaLight__Array>(get_class());
        }
    } // namespace VolumetricAreaLight__Array
} // namespace app::classes::types
