#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ApplyPhysicalManagerState__Class.h>
#include <Modloader/app/structs/ApplyPhysicalManagerState.h>

namespace app::classes::types {
    namespace ApplyPhysicalManagerState {
        namespace {
            inline app::ApplyPhysicalManagerState__Class* type_info_ref = nullptr;
        }
        inline app::ApplyPhysicalManagerState__Class** type_info = &type_info_ref;
        inline app::ApplyPhysicalManagerState__Class* get_class() {
            return il2cpp::get_class<app::ApplyPhysicalManagerState__Class>(type_info, "", "ApplyPhysicalManagerState");
        }
        inline app::ApplyPhysicalManagerState* create() {
            return il2cpp::create_object<app::ApplyPhysicalManagerState>(get_class());
        }
    } // namespace ApplyPhysicalManagerState
} // namespace app::classes::types
