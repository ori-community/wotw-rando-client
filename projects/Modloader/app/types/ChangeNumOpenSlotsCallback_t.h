#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChangeNumOpenSlotsCallback_t {
        namespace {
            inline app::ChangeNumOpenSlotsCallback_t__Class* type_info_ref = nullptr;
        }
        inline app::ChangeNumOpenSlotsCallback_t__Class** type_info = &type_info_ref;
        inline app::ChangeNumOpenSlotsCallback_t__Class* get_class() {
            return il2cpp::get_class<app::ChangeNumOpenSlotsCallback_t__Class>(type_info, "Steamworks", "ChangeNumOpenSlotsCallback_t");
        }
        inline app::ChangeNumOpenSlotsCallback_t* create() {
            return il2cpp::create_object<app::ChangeNumOpenSlotsCallback_t>(get_class());
        }
        inline app::ChangeNumOpenSlotsCallback_t__Boxed* box(app::ChangeNumOpenSlotsCallback_t value) {
            return il2cpp::box_value<app::ChangeNumOpenSlotsCallback_t__Boxed>(get_class(), value);
        }
    } // namespace ChangeNumOpenSlotsCallback_t
} // namespace app::classes::types
