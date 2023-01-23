#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ISwitch__Array__Class.h>
#include <Modloader/app/structs/ISwitch__Array.h>

namespace app::classes::types {
    namespace ISwitch__Array {
        namespace {
            inline app::ISwitch__Array__Class* type_info_ref = nullptr;
        }
        inline app::ISwitch__Array__Class** type_info = &type_info_ref;
        inline app::ISwitch__Array__Class* get_class() {
            return il2cpp::get_class<app::ISwitch__Array__Class>(type_info, "", "ISwitch[]");
        }
        inline app::ISwitch__Array* create() {
            return il2cpp::create_object<app::ISwitch__Array>(get_class());
        }
    } // namespace ISwitch__Array
} // namespace app::classes::types
