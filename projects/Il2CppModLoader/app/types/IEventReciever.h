#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEventReciever {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEventReciever__Class** type_info;
        inline app::IEventReciever__Class* get_class() {
            return il2cpp::get_class<app::IEventReciever__Class>(type_info, "Moon.Timeline", "IEventReciever");
        }
        inline app::IEventReciever* create() {
            return il2cpp::create_object<app::IEventReciever>(get_class());
        }
    } // namespace IEventReciever
} // namespace app::classes::types
