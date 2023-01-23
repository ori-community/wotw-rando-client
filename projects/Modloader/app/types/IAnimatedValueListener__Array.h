#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IAnimatedValueListener__Array__Class.h>
#include <Modloader/app/structs/IAnimatedValueListener__Array.h>

namespace app::classes::types {
    namespace IAnimatedValueListener__Array {
        namespace {
            inline app::IAnimatedValueListener__Array__Class* type_info_ref = nullptr;
        }
        inline app::IAnimatedValueListener__Array__Class** type_info = &type_info_ref;
        inline app::IAnimatedValueListener__Array__Class* get_class() {
            return il2cpp::get_class<app::IAnimatedValueListener__Array__Class>(type_info, "Moon", "IAnimatedValueListener[]");
        }
        inline app::IAnimatedValueListener__Array* create() {
            return il2cpp::create_object<app::IAnimatedValueListener__Array>(get_class());
        }
    } // namespace IAnimatedValueListener__Array
} // namespace app::classes::types
