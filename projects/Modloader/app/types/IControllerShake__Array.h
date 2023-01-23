#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IControllerShake__Array__Class.h>
#include <Modloader/app/structs/IControllerShake__Array.h>

namespace app::classes::types {
    namespace IControllerShake__Array {
        namespace {
            inline app::IControllerShake__Array__Class* type_info_ref = nullptr;
        }
        inline app::IControllerShake__Array__Class** type_info = &type_info_ref;
        inline app::IControllerShake__Array__Class* get_class() {
            return il2cpp::get_class<app::IControllerShake__Array__Class>(type_info, "", "IControllerShake[]");
        }
        inline app::IControllerShake__Array* create() {
            return il2cpp::create_object<app::IControllerShake__Array>(get_class());
        }
    } // namespace IControllerShake__Array
} // namespace app::classes::types
