#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CausalitySynchronousWork__Enum__Class.h>
#include <Modloader/app/structs/CausalitySynchronousWork__Enum.h>

namespace app::classes::types {
    namespace CausalitySynchronousWork__Enum {
        namespace {
            inline app::CausalitySynchronousWork__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CausalitySynchronousWork__Enum__Class** type_info = &type_info_ref;
        inline app::CausalitySynchronousWork__Enum__Class* get_class() {
            return il2cpp::get_class<app::CausalitySynchronousWork__Enum__Class>(type_info, "System.Threading.Tasks", "CausalitySynchronousWork");
        }
        inline app::CausalitySynchronousWork__Enum* create() {
            return il2cpp::create_object<app::CausalitySynchronousWork__Enum>(get_class());
        }
    } // namespace CausalitySynchronousWork__Enum
} // namespace app::classes::types
