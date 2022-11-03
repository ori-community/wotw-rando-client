#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeetoRunAwayBehaviour {
        namespace {
            inline app::SkeetoRunAwayBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoRunAwayBehaviour__Class** type_info = &type_info_ref;
        inline app::SkeetoRunAwayBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoRunAwayBehaviour__Class>(type_info, "", "SkeetoRunAwayBehaviour");
        }
        inline app::SkeetoRunAwayBehaviour* create() {
            return il2cpp::create_object<app::SkeetoRunAwayBehaviour>(get_class());
        }
    } // namespace SkeetoRunAwayBehaviour
} // namespace app::classes::types
