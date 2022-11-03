#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateHolder {
        namespace {
            inline app::StateHolder__Class* type_info_ref = nullptr;
        }
        inline app::StateHolder__Class** type_info = &type_info_ref;
        inline app::StateHolder__Class* get_class() {
            return il2cpp::get_class<app::StateHolder__Class>(type_info, "", "StateHolder");
        }
        inline app::StateHolder* create() {
            return il2cpp::create_object<app::StateHolder>(get_class());
        }
    } // namespace StateHolder
} // namespace app::classes::types
