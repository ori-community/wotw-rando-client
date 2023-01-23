#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SteamParentalSettingsChanged_t__Class.h>
#include <Modloader/app/structs/SteamParentalSettingsChanged_t.h>
#include <Modloader/app/structs/SteamParentalSettingsChanged_t__Boxed.h>

namespace app::classes::types {
    namespace SteamParentalSettingsChanged_t {
        namespace {
            inline app::SteamParentalSettingsChanged_t__Class* type_info_ref = nullptr;
        }
        inline app::SteamParentalSettingsChanged_t__Class** type_info = &type_info_ref;
        inline app::SteamParentalSettingsChanged_t__Class* get_class() {
            return il2cpp::get_class<app::SteamParentalSettingsChanged_t__Class>(type_info, "Steamworks", "SteamParentalSettingsChanged_t");
        }
        inline app::SteamParentalSettingsChanged_t* create() {
            return il2cpp::create_object<app::SteamParentalSettingsChanged_t>(get_class());
        }
        inline app::SteamParentalSettingsChanged_t__Boxed* box(app::SteamParentalSettingsChanged_t value) {
            return il2cpp::box_value<app::SteamParentalSettingsChanged_t__Boxed>(get_class(), value);
        }
    } // namespace SteamParentalSettingsChanged_t
} // namespace app::classes::types
