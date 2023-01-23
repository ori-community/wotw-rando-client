#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LightCanvas__Array__Class.h>
#include <Modloader/app/structs/LightCanvas__Array.h>

namespace app::classes::types {
    namespace LightCanvas__Array {
        namespace {
            inline app::LightCanvas__Array__Class* type_info_ref = nullptr;
        }
        inline app::LightCanvas__Array__Class** type_info = &type_info_ref;
        inline app::LightCanvas__Array__Class* get_class() {
            return il2cpp::get_class<app::LightCanvas__Array__Class>(type_info, "", "LightCanvas[]");
        }
        inline app::LightCanvas__Array* create() {
            return il2cpp::create_object<app::LightCanvas__Array>(get_class());
        }
    } // namespace LightCanvas__Array
} // namespace app::classes::types
