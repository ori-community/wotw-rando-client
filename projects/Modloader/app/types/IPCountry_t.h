#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IPCountry_t__Class.h>
#include <Modloader/app/structs/IPCountry_t.h>
#include <Modloader/app/structs/IPCountry_t__Boxed.h>

namespace app::classes::types {
    namespace IPCountry_t {
        namespace {
            inline app::IPCountry_t__Class* type_info_ref = nullptr;
        }
        inline app::IPCountry_t__Class** type_info = &type_info_ref;
        inline app::IPCountry_t__Class* get_class() {
            return il2cpp::get_class<app::IPCountry_t__Class>(type_info, "Steamworks", "IPCountry_t");
        }
        inline app::IPCountry_t* create() {
            return il2cpp::create_object<app::IPCountry_t>(get_class());
        }
        inline app::IPCountry_t__Boxed* box(app::IPCountry_t value) {
            return il2cpp::box_value<app::IPCountry_t__Boxed>(get_class(), value);
        }
    } // namespace IPCountry_t
} // namespace app::classes::types
