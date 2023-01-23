#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BindingRestrictions__Class.h>
#include <Modloader/app/structs/BindingRestrictions.h>
#include <Modloader/app/structs/BindingRestrictions__Array.h>

namespace app::classes::types {
    namespace BindingRestrictions {
        inline app::BindingRestrictions__Class** type_info = (app::BindingRestrictions__Class**)(modloader::win::memory::resolve_rva(0x04755790));
        inline app::BindingRestrictions__Class* get_class() {
            return il2cpp::get_class<app::BindingRestrictions__Class>(type_info, "System.Dynamic", "BindingRestrictions");
        }
        inline app::BindingRestrictions* create() {
            return il2cpp::create_object<app::BindingRestrictions>(get_class());
        }
        inline app::BindingRestrictions__Array* create_array(int size) {
            return il2cpp::array_new<app::BindingRestrictions__Array>(get_class(), size);
        }
        inline app::BindingRestrictions__Array* create_array(const std::vector<app::BindingRestrictions*>& items) {
            return il2cpp::array_new<app::BindingRestrictions__Array>(get_class(), items);
        }
    } // namespace BindingRestrictions
} // namespace app::classes::types
