#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PoolToggler__Class.h>
#include <Modloader/app/structs/PoolToggler.h>

namespace app::classes::types {
    namespace PoolToggler {
        namespace {
            inline app::PoolToggler__Class* type_info_ref = nullptr;
        }
        inline app::PoolToggler__Class** type_info = &type_info_ref;
        inline app::PoolToggler__Class* get_class() {
            return il2cpp::get_class<app::PoolToggler__Class>(type_info, "", "PoolToggler");
        }
        inline app::PoolToggler* create() {
            return il2cpp::create_object<app::PoolToggler>(get_class());
        }
    } // namespace PoolToggler
} // namespace app::classes::types
