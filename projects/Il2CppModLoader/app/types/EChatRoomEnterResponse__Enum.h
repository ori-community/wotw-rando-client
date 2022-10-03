#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EChatRoomEnterResponse__Enum {
        namespace {
            app::EChatRoomEnterResponse__Enum__Class* type_info_ref = nullptr;
        }
        app::EChatRoomEnterResponse__Enum__Class** type_info = &type_info_ref;
        inline app::EChatRoomEnterResponse__Enum__Class* get_class() {
            return il2cpp::get_class<app::EChatRoomEnterResponse__Enum__Class>(type_info, "Steamworks", "EChatRoomEnterResponse");
        }
        inline app::EChatRoomEnterResponse__Enum* create() {
            return il2cpp::create_object<app::EChatRoomEnterResponse__Enum>(get_class());
        }
    } // namespace EChatRoomEnterResponse__Enum
} // namespace app::classes::types
