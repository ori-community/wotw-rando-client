#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GSReputation_t__Class.h>
#include <Modloader/app/structs/GSReputation_t.h>
#include <Modloader/app/structs/GSReputation_t__Boxed.h>

namespace app::classes::types {
    namespace GSReputation_t {
        namespace {
            inline app::GSReputation_t__Class* type_info_ref = nullptr;
        }
        inline app::GSReputation_t__Class** type_info = &type_info_ref;
        inline app::GSReputation_t__Class* get_class() {
            return il2cpp::get_class<app::GSReputation_t__Class>(type_info, "Steamworks", "GSReputation_t");
        }
        inline app::GSReputation_t* create() {
            return il2cpp::create_object<app::GSReputation_t>(get_class());
        }
        inline app::GSReputation_t__Boxed* box(app::GSReputation_t value) {
            return il2cpp::box_value<app::GSReputation_t__Boxed>(get_class(), value);
        }
    } // namespace GSReputation_t
} // namespace app::classes::types
